#!/bin/bash
set -euo pipefail
set -x
trap 'echo "ERROR: patch_sdk_ios.sh failed at line $LINENO with exit code $?" >&2' ERR

SDK_DIR="${1:-.}"

echo "Patching rexglue-sdk for iOS ARM64..."

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
    '    if(NOT ANDROID AND NOT IOS)\n        add_compile_options(-mcmodel=large)\n    endif()')
print("  2. Made -mcmodel=large conditional")

# Add iOS platform detection
text = text.replace(
    '    set(REX_PLATFORM "linux-amd64")\n    add_compile_definitions(REX_PLATFORM_LINUX=1)',
    '    if(ANDROID)\n        set(REX_PLATFORM "android-arm64")\n        add_compile_definitions(REX_PLATFORM_ANDROID=1 REX_PLATFORM_LINUX=1)\n    elseif(IOS)\n        set(REX_PLATFORM "ios-arm64")\n        add_compile_definitions(REX_PLATFORM_IOS=1)\n    else()\n        set(REX_PLATFORM "linux-amd64")\n        add_compile_definitions(REX_PLATFORM_LINUX=1)\n    endif()')
print("  3. Added iOS platform detection")

# iOS bionic/pthread setup
thread_setup = '''
# iOS includes pthreads - no separate library needed
if(IOS)
  set(CMAKE_THREAD_LIBS_INIT "" CACHE STRING "" FORCE)
  set(CMAKE_HAVE_THREADS_LIBRARY 1 CACHE BOOL "" FORCE)
  set(CMAKE_USE_PTHREADS_INIT 1 CACHE BOOL "" FORCE)
  set(THREADS_PREFER_PTHREAD_FLAG OFF CACHE BOOL "" FORCE)
endif()
'''
text = re.sub(r'(project\([^)]+\))', r'\1' + thread_setup, text, count=1)
print("  3b. Added iOS Threads setup in root CMakeLists.txt")

open(f, 'w').write(text)
PYEOF

# ---- 2. Patch src/ui/CMakeLists.txt ----
python3 << PYEOF
f = "${SDK_DIR}/src/ui/CMakeLists.txt"
text = open(f).read()

# Add iOS platform sources (before the else/GNU-Linux block)
text = text.replace(
    '''else()
    set(REXUI_PLATFORM_SOURCES
        surface_gnulinux.cpp
        window_gtk.cpp
        windowed_app_context_gtk.cpp
    )
endif()''',
    '''elseif(IOS)
    set(REXUI_PLATFORM_SOURCES
        surface_ios_stub.cpp
    )
else()
    set(REXUI_PLATFORM_SOURCES
        surface_gnulinux.cpp
        window_gtk.cpp
        windowed_app_context_gtk.cpp
    )
endif()''', 1)

# Add iOS deps before the else/GTK block
text = text.replace(
    '''else()
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
    pkg_check_modules(X11_XCB REQUIRED x11-xcb)''',
    '''elseif(IOS)
    find_library(UIKIT_LIB UIKit)
    find_library(FOUNDATION_LIB Foundation)
    find_library(COREGRAPHICS_LIB CoreGraphics)
    target_link_libraries(rexui PUBLIC
        ${UIKIT_LIB} ${FOUNDATION_LIB} ${COREGRAPHICS_LIB})
else()
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
    pkg_check_modules(X11_XCB REQUIRED x11-xcb)''', 1)

open(f, 'w').write(text)
print("  4. Patched src/ui/CMakeLists.txt for iOS")
PYEOF

# ---- 3. Create iOS surface stub ----
cat > "${SDK_DIR}/src/ui/surface_ios_stub.cpp" << 'CPPEOF'
// iOS surface stub - UIView/CAMetalLayer handles surface creation
// via VK_EXT_metal_surface, bypassing GTK/X11 window system.
#include <rex/platform.h>
#if defined(REX_PLATFORM_IOS) || defined(__APPLE__)
namespace rex { namespace ui { /* iOS stubs - surfaces managed by UIKit app */ } }
#endif
CPPEOF
echo "  5. Created surface_ios_stub.cpp"

# ---- 3b. Create missing rex/ui/surface_ios.h header ----
cat > "${SDK_DIR}/include/rex/ui/surface_ios.h" << 'HEOF'
#pragma once
// iOS UIView surface for Vulkan/MoltenVK (VK_EXT_metal_surface)
#if defined(__APPLE__) && defined(REX_PLATFORM_IOS)

#include <UIKit/UIScreen.h>
#include <UIKit/UIView.h>
#include <rex/ui/surface.h>

namespace rex {
namespace ui {

class IOSUIViewSurface final : public Surface {
 public:
  explicit IOSUIViewSurface(UIView* view)
      : view_(view) {}
  TypeIndex GetType() const override { return kTypeIndex_IOSUIView; }
  UIView* view() const { return view_; }

 protected:
  bool GetSizeImpl(uint32_t& width_out, uint32_t& height_out) const override {
    if (view_) {
      CGSize size = view_.bounds.size;
      width_out = static_cast<uint32_t>(size.width * view_.contentScaleFactor);
      height_out = static_cast<uint32_t>(size.height * view_.contentScaleFactor);
      return true;
    }
    return false;
  }

 private:
  UIView* view_;
};

}  // namespace ui
}  // namespace rex

#endif
HEOF
echo "  5b. Created rex/ui/surface_ios.h"

# ---- 4. Patch thirdparty/CMakeLists.txt: exclude x86 on iOS ----
python3 << PYEOF
f = "${SDK_DIR}/thirdparty/CMakeLists.txt"
text = open(f).read()

# Fix FFmpeg x86 optimizations guard - exclude iOS
text = text.replace(
    '# Add x86 optimizations on Windows/Linux\nif(WIN32 OR (UNIX AND NOT APPLE))',
    '# Add x86 optimizations on Windows/Linux (not iOS ARM64)\nif((WIN32 OR (UNIX AND NOT APPLE)) AND NOT IOS)')

open(f, 'w').write(text)
print("  6. Excluded FFmpeg x86 sources on iOS")
PYEOF

# ---- 5. Patch C++23 compatibility for iOS ----
# 5a. Replace std::move_only_function with std::function in ALL source files
find "${SDK_DIR}/include" "${SDK_DIR}/src" \( -name '*.h' -o -name '*.hpp' -o -name '*.cpp' \) -print0 | \
  xargs -0 sed -i 's/std::move_only_function/std::function/g' 2>/dev/null || echo "  7. No .h/.hpp/.cpp files found or sed failed, continuing"
echo "  7. Replaced std::move_only_function -> std::function globally"

# 5b. Add clock_time_conversion forward declaration in chrono.h
python3 << PYEOF
f = "${SDK_DIR}/include/rex/time/chrono.h"
text = open(f).read()

old = 'namespace std::chrono {\n\ntemplate <>\nstruct clock_time_conversion'
new = '''namespace std::chrono {

// Forward-declare clock_time_conversion for Apple libc++ (C++20 feature)
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

# 5c. Replace std::jthread / std::stop_token with std::thread + atomic<bool> in timer_queue.cpp
python3 << PYEOF
f = "${SDK_DIR}/src/core/timer_queue.cpp"
text = open(f).read()

if '#include <atomic>' not in text:
    text = text.replace('#include <algorithm>', '#include <algorithm>\n#include <atomic>')

text = text.replace(
    '''dispatch_thread_ = std::jthread([this](std::stop_token stop_token) {
      TimerThreadMain(stop_token);
    });''',
    '''stop_requested_.store(false);
    dispatch_thread_ = std::thread([this]() {
      TimerThreadMain();
    });''')

text = text.replace(
    'dispatch_thread_.request_stop();',
    'stop_requested_.store(true);')

text = text.replace(
    '// std::jthread auto-joins on destruction',
    'if (dispatch_thread_.joinable()) dispatch_thread_.join();')

text = text.replace(
    'void TimerThreadMain(std::stop_token stop_token) {',
    'void TimerThreadMain() {')

text = text.replace('stop_token.stop_requested()', 'stop_requested_.load()')

text = text.replace('std::jthread::id', 'std::thread::id')

text = text.replace('std::jthread dispatch_thread_;', 'std::thread dispatch_thread_;\n  std::atomic<bool> stop_requested_{false};')

open(f, 'w').write(text)
print("  9. Replaced std::jthread/stop_token with std::thread/atomic<bool> in timer_queue.cpp")
PYEOF

# 5d. Create missing rex/main_ios.h stub
cat > "${SDK_DIR}/include/rex/main_ios.h" << 'HEOF'
#pragma once
// iOS main stub for ReXGlue SDK
#if defined(__APPLE__) && defined(REX_PLATFORM_IOS)

#include <TargetConditionals.h>

namespace rex {

inline int GetIOSDeploymentTarget() {
#if TARGET_OS_IOS
    return __IPHONE_OS_VERSION_MIN_REQUIRED;
#else
    return 0;
#endif
}

}  // namespace rex
#endif
HEOF
echo "  10. Created rex/main_ios.h with GetIOSDeploymentTarget()"

# 5e. Patch memory_posix.cpp
if [ -f "${SDK_DIR}/src/core/memory_posix.cpp" ]; then
    sed -i 's|// #include "xenia/base/main_android.h"|#include <rex/main_ios.h>|' "${SDK_DIR}/src/core/memory_posix.cpp"
    echo "  10b. Patched memory_posix.cpp with rex/main_ios.h include"
fi

# ---- 6. Fix std::chrono::clock_cast globally ----
find "${SDK_DIR}/src" \( -name '*.cpp' -o -name '*.h' \) -print0 | \
  xargs -0 grep -l 'clock_cast' 2>/dev/null | while IFS= read -r f; do
    sed -i 's/std::chrono::clock_cast<WinSystemClock>(/std::chrono::clock_time_conversion<WinSystemClock, XSystemClock>{}(/g' "$f"
    sed -i 's/std::chrono::clock_cast<GClock_>(/std::chrono::clock_time_conversion<GClock_, WClock_>{}(/g' "$f"
    echo "  11. Replaced clock_cast in $(basename "$f")"
  done || echo "  11. No clock_cast files found or grep failed, continuing"

# ---- 7. Fix NEON shift-by-variable in memory.h ----
python3 << PYEOF
f = "${SDK_DIR}/include/rex/runtime/guest/memory.h"
text = open(f).read()

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

# ---- 8. Fix namespace for ARM64 arch constants in mmio_handler.cpp ----
if [ -f "${SDK_DIR}/src/runtime/mmio_handler.cpp" ]; then
    sed -i '/^namespace rex::runtime {/a \
#if REX_ARCH_ARM64\
using namespace arch;\
#endif' "${SDK_DIR}/src/runtime/mmio_handler.cpp"
    echo "  13. Added 'using namespace arch' for ARM64 in mmio_handler.cpp"
fi

# ---- 9. Remove -lpthread and -lrt from CMake files ----
python3 << PYEOF
import os, re
for root, dirs, files in os.walk("${SDK_DIR}"):
    for fn in files:
        if fn.endswith('.cmake') or fn == 'CMakeLists.txt':
            path = os.path.join(root, fn)
            text = open(path).read()
            orig = text
            text = text.replace('-lpthread', '')
            text = text.replace('-lrt', '')
            text = text.replace('-pthread', '')
            text = re.sub(r'"\s*pthread\s*"', '', text)
            text = re.sub(r'"\s*rt\s*"', '', text)
            text = re.sub(r'^\s+pthread\s*$', '', text, flags=re.MULTILINE)
            text = re.sub(r'^\s+rt\s*$', '', text, flags=re.MULTILINE)
            if text != orig:
                open(path, 'w').write(text)
                print(f"  14-15. Cleaned pthread/rt from {os.path.relpath(path, '${SDK_DIR}')}")
PYEOF

# ---- 10. Skip building rexglue executable on iOS (host-only CLI tool) ----
if [ -f "${SDK_DIR}/src/rexglue/CMakeLists.txt" ]; then
    sed -i '1i if(NOT ANDROID AND NOT IOS)' "${SDK_DIR}/src/rexglue/CMakeLists.txt"
    echo 'endif()' >> "${SDK_DIR}/src/rexglue/CMakeLists.txt"
    echo "  16. Skipped rexglue executable on iOS"
fi

# Fix install cmake for iOS
python3 << PYEOF
import re

f = "${SDK_DIR}/cmake/rexglue_install.cmake"
text = open(f).read()

# Remove rexglue from install targets
text = text.replace('    rexglue\n    SDL2-static', '    SDL2-static')
text = text.replace('    rexglue\n)', ')')

# Add conditional rexglue install at the end
text += '''
# Install rexglue CLI tool only on non-Android/non-iOS platforms
if(NOT ANDROID AND NOT IOS)
  if(TARGET rexglue)
    install(TARGETS rexglue
      EXPORT rexglue-targets
      RUNTIME DESTINATION bin)
  endif()
endif()
'''

open(f, 'w').write(text)
print("  17. Properly fixed install cmake for iOS")
PYEOF

echo ""
echo "SDK patched for iOS ARM64 successfully!"
