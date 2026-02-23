#!/bin/bash
# Patch rexglue-sdk source for Android ARM64 cross-compilation
# Usage: ./patch_sdk_android.sh <sdk-source-dir>
set -e
SDK_DIR="${1:-.}"

echo "Patching rexglue-sdk for Android ARM64..."

# ---- 1. Patch root CMakeLists.txt ----
python3 << PYEOF
import re

f = "${SDK_DIR}/CMakeLists.txt"
text = open(f).read()

# Remove x64 arch enforcement
text = re.sub(r'# Enforce x64 architecture\n.*?endif\(\)\n', '', text, flags=re.DOTALL)
print("  1. Removed x64 arch check")

# Make -mcmodel=large conditional (not for ARM)
text = text.replace(
    '    add_compile_options(-mcmodel=large)',
    '    if(NOT ANDROID)\n        add_compile_options(-mcmodel=large)\n    endif()')
print("  2. Made -mcmodel=large conditional")

# Add Android platform detection
text = text.replace(
    '    set(REX_PLATFORM "linux-amd64")\n    add_compile_definitions(REX_PLATFORM_LINUX=1)',
    '    if(ANDROID)\n        set(REX_PLATFORM "android-arm64")\n        add_compile_definitions(REX_PLATFORM_ANDROID=1 REX_PLATFORM_LINUX=1)\n    else()\n        set(REX_PLATFORM "linux-amd64")\n        add_compile_definitions(REX_PLATFORM_LINUX=1)\n    endif()')
print("  3. Added Android platform detection")


# On Android, SDL2 creates conflicting export sets (ndk-modules).
# Fix: disable SDL2 install in thirdparty/CMakeLists.txt
tp_f = "${SDK_DIR}/thirdparty/CMakeLists.txt"
tp_text = open(tp_f).read()
tp_text = tp_text.replace(
    'set(SDL2_DISABLE_INSTALL OFF CACHE BOOL "" FORCE)',
    'set(SDL2_DISABLE_INSTALL ON CACHE BOOL "" FORCE)  # Android: disable to avoid export conflict')
open(tp_f, 'w').write(tp_text)
print("  3b. Disabled SDL2 install in thirdparty/CMakeLists.txt")

# Also add SDL2-static to rexglue export targets since SDL2 won't install its own
install_f = "${SDK_DIR}/cmake/rexglue_install.cmake"
itext = open(install_f).read()
# Add SDL2-static to the install targets list so it's in the rexglue export set
itext = itext.replace(
    '    # CLI tool\n    rexglue\n)',
    '    # CLI tool\n    rexglue\n    SDL2-static\n)')
open(install_f, 'w').write(itext)
print("  3c. Added SDL2-static to rexglue install targets")

open(f, 'w').write(text)
PYEOF

# ---- 2. Patch src/ui/CMakeLists.txt ----
python3 << PYEOF
f = "${SDK_DIR}/src/ui/CMakeLists.txt"
text = open(f).read()

# Add Android platform sources (before the else/GNU-Linux block)
text = text.replace(
    '''else()
    set(REXUI_PLATFORM_SOURCES
        surface_gnulinux.cpp
        window_gtk.cpp
        windowed_app_context_gtk.cpp
    )
endif()''',
    '''elseif(ANDROID)
    set(REXUI_PLATFORM_SOURCES
        surface_android_stub.cpp
    )
else()
    set(REXUI_PLATFORM_SOURCES
        surface_gnulinux.cpp
        window_gtk.cpp
        windowed_app_context_gtk.cpp
    )
endif()''', 1)

# Add Android deps before the else/GTK block
text = text.replace(
    '''else()
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
    pkg_check_modules(X11_XCB REQUIRED x11-xcb)''',
    '''elseif(ANDROID)
    find_library(ANDROID_LOG_LIB log)
    find_library(ANDROID_NATIVE_LIB android)
    target_link_libraries(rexui PUBLIC
        \${ANDROID_LOG_LIB} \${ANDROID_NATIVE_LIB})
else()
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
    pkg_check_modules(X11_XCB REQUIRED x11-xcb)''', 1)

open(f, 'w').write(text)
print("  4. Patched src/ui/CMakeLists.txt for Android")
PYEOF

# ---- 3. Create Android surface stub ----
cat > "${SDK_DIR}/src/ui/surface_android_stub.cpp" << 'CPPEOF'
// Android surface stub - NativeActivity handles Vulkan surface creation
// via VK_KHR_android_surface, bypassing the GTK/X11 window system.
#include <rex/platform.h>
#if defined(REX_PLATFORM_ANDROID) || defined(__ANDROID__)
namespace rex { namespace ui { /* Android stubs - surfaces managed by app */ } }
#endif
CPPEOF
echo "  5. Created surface_android_stub.cpp"

# ---- 4. Patch thirdparty/CMakeLists.txt: exclude x86 FFmpeg on Android ----
python3 << PYEOF
f = "${SDK_DIR}/thirdparty/CMakeLists.txt"
text = open(f).read()

# Fix FFmpeg x86 optimizations guard - exclude Android
text = text.replace(
    '# Add x86 optimizations on Windows/Linux\nif(WIN32 OR (UNIX AND NOT APPLE))',
    '# Add x86 optimizations on Windows/Linux (not Android ARM64)\nif((WIN32 OR (UNIX AND NOT APPLE)) AND NOT ANDROID)')

open(f, 'w').write(text)
print("  6. Excluded FFmpeg x86 sources on Android")
PYEOF

# ---- 4. Patch kernel CMakeLists if it has x86 asm ----
KERNEL_CMAKE="${SDK_DIR}/src/kernel/CMakeLists.txt"
if [ -f "$KERNEL_CMAKE" ]; then
    if grep -q "exception_handler_asm" "$KERNEL_CMAKE" 2>/dev/null; then
        python3 << PYEOF
f = "$KERNEL_CMAKE"
text = open(f).read()
# Wrap x86 asm sources in architecture check
if 'exception_handler_asm' in text and 'NOT ANDROID' not in text:
    text = text.replace(
        'exception_handler_asm',
        'exception_handler_asm  # x86 only')
    print("  6. Noted x86 asm in kernel (may need conditional)")
open(f, 'w').write(text)
PYEOF
    fi
fi

echo ""
echo "SDK patched for Android ARM64 successfully!"

# ---- 5. Patch C++23 compatibility for Android NDK libc++ ----
echo "Patching C++23 compatibility for Android NDK..."

# 5a. Replace std::move_only_function with std::function in ALL source files
find "${SDK_DIR}/include" "${SDK_DIR}/src" -name '*.h' -o -name '*.hpp' -o -name '*.cpp' | \
  xargs sed -i 's/std::move_only_function/std::function/g'
echo "  7. Replaced std::move_only_function -> std::function globally"

# 5b. Add clock_time_conversion forward declaration in chrono.h
python3 << PYEOF
f = "${SDK_DIR}/include/rex/time/chrono.h"
text = open(f).read()

old = 'namespace std::chrono {\n\ntemplate <>\nstruct clock_time_conversion'
new = '''namespace std::chrono {

// Forward-declare clock_time_conversion for NDK libc++ (C++20 feature not always available)
#if !defined(__cpp_lib_chrono) || __cpp_lib_chrono < 201907L
template <typename Dest, typename Source>
struct clock_time_conversion {};
#endif

template <>
struct clock_time_conversion'''

text = text.replace(old, new, 1)
open(f, 'w').write(text)
print("  8. Added clock_time_conversion forward declaration in chrono.h")
PYEOF

# 5c. Create missing rex/main_android.h stub
cat > "${SDK_DIR}/include/rex/main_android.h" << 'HEOF'
#pragma once
// Android main stub for ReXGlue SDK
#if defined(__ANDROID__) || defined(REX_PLATFORM_ANDROID)
#include <android/log.h>
#include <android/api-level.h>
#include <sys/prctl.h>
#include <jni.h>

namespace rex {

// Return the Android API level at runtime
inline int GetAndroidApiLevel() {
    return android_get_device_api_level();
}

}  // namespace rex
#endif
HEOF
echo "  9. Created rex/main_android.h with GetAndroidApiLevel()"

# 5d. Replace std::jthread / std::stop_token with std::thread + atomic<bool> in timer_queue.cpp
python3 << PYEOF
f = "${SDK_DIR}/src/core/timer_queue.cpp"
text = open(f).read()

# Add atomic include
if '#include <atomic>' not in text:
    text = text.replace('#include <algorithm>', '#include <algorithm>\n#include <atomic>')

# Replace jthread constructor with thread + stop flag
text = text.replace(
    '''dispatch_thread_ = std::jthread([this](std::stop_token stop_token) {
      TimerThreadMain(stop_token);
    });''',
    '''stop_requested_.store(false);
    dispatch_thread_ = std::thread([this]() {
      TimerThreadMain();
    });''')

# Replace destructor request_stop
text = text.replace(
    'dispatch_thread_.request_stop();',
    'stop_requested_.store(true);')

# Replace jthread auto-join comment with explicit join
text = text.replace(
    '// std::jthread auto-joins on destruction',
    'if (dispatch_thread_.joinable()) dispatch_thread_.join();')

# Replace TimerThreadMain signature
text = text.replace(
    'void TimerThreadMain(std::stop_token stop_token) {',
    'void TimerThreadMain() {')

# Replace stop_token.stop_requested()
text = text.replace('stop_token.stop_requested()', 'stop_requested_.load()')

# Replace jthread::id
text = text.replace('std::jthread::id', 'std::thread::id')

# Replace std::jthread member
text = text.replace('std::jthread dispatch_thread_;', 'std::thread dispatch_thread_;\n  std::atomic<bool> stop_requested_{false};')

open(f, 'w').write(text)
print("  10. Replaced std::jthread/stop_token with std::thread/atomic<bool> in timer_queue.cpp")
PYEOF

echo "C++23 compatibility patches applied!"

# ---- 6. Fix std::chrono::clock_cast in threading.cpp (not in NDK libc++) ----
python3 << PYEOF
f = "${SDK_DIR}/src/core/threading.cpp"
text = open(f).read()

# Replace std::chrono::clock_cast<GClock_>(due_time) with manual conversion
# clock_cast converts between WinSystemClock and XSystemClock (guest clock)
# We use clock_time_conversion directly since clock_cast may not exist
text = text.replace(
    'std::chrono::clock_cast<GClock_>(due_time)',
    'std::chrono::clock_time_conversion<GClock_, WClock_>{}(due_time)')

open(f, 'w').write(text)
print("  11. Replaced std::chrono::clock_cast with clock_time_conversion in threading.cpp")
PYEOF

# ---- 7. Fix NEON shift-by-variable in memory.h ----
# On ARM64, vshlq_n / vshrq_n require compile-time constant shift amounts.
# Replace simde_mm_slli_epi64(a, shift) with runtime-shift-capable equivalent.
python3 << PYEOF
f = "${SDK_DIR}/include/rex/runtime/guest/memory.h"
text = open(f).read()

# Replace the simde_mm_vsl function that uses runtime shift with NEON-safe code
old_vsl = '''inline simde__m128i simde_mm_vsl(simde__m128i a, simde__m128i b) {
    int shift = simde_mm_extract_epi8(b, 15) & 0x7;  // Get low 3 bits from byte 15 (BE: byte 0)
    if (shift == 0) return a;
    // Split into high and low 64-bit parts
    simde__m128i low_shifted = simde_mm_slli_epi64(a, shift);
    simde__m128i high_carry = simde_mm_srli_epi64(a, 64 - shift);
    // Shift the carry from low qword to high qword position
    high_carry = simde_mm_slli_si128(high_carry, 8);
    return simde_mm_or_si128(low_shifted, high_carry);
}'''

new_vsl = '''inline simde__m128i simde_mm_vsl(simde__m128i a, simde__m128i b) {
    int shift = simde_mm_extract_epi8(b, 15) & 0x7;
    if (shift == 0) return a;
    // Use runtime-safe shift via simde_mm_sll_epi64 (takes __m128i shift count)
    simde__m128i shift_v = simde_mm_cvtsi64_si128(shift);
    simde__m128i inv_shift_v = simde_mm_cvtsi64_si128(64 - shift);
    simde__m128i low_shifted = simde_mm_sll_epi64(a, shift_v);
    simde__m128i high_carry = simde_mm_srl_epi64(a, inv_shift_v);
    high_carry = simde_mm_slli_si128(high_carry, 8);
    return simde_mm_or_si128(low_shifted, high_carry);
}'''

text = text.replace(old_vsl, new_vsl)

open(f, 'w').write(text)
print("  12. Fixed NEON shift-by-variable in memory.h (use sll/srl_epi64)")
PYEOF

echo "All Android ARM64 patches applied!"
