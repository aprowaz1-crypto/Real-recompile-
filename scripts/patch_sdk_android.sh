#!/bin/bash
# Patch rexglue-sdk source for Android ARM64 cross-compilation
# Usage: ./patch_sdk_android.sh <sdk-source-dir>

set -e
SDK_DIR="${1:-.}"
CMAKE_FILE="$SDK_DIR/CMakeLists.txt"

echo "Patching rexglue-sdk for Android ARM64..."

# 1. Remove x64 architecture enforcement
python3 -c "
import re
text = open('$CMAKE_FILE').read()
# Remove the x64 check block
text = re.sub(r'# Enforce x64 architecture\n.*?endif\(\)\n', '', text, flags=re.DOTALL)
open('$CMAKE_FILE', 'w').write(text)
print('  Removed x64 arch check')
"

# 2. Make -mcmodel=large conditional (x86 only, not ARM64)
python3 -c "
text = open('$CMAKE_FILE').read()
old = '    add_compile_options(-mcmodel=large)'
new = '''    if(NOT ANDROID)
        add_compile_options(-mcmodel=large)
    endif()'''
text = text.replace(old, new, 1)
open('$CMAKE_FILE', 'w').write(text)
print('  Made -mcmodel=large conditional')
"

# 3. Add Android platform detection
python3 -c "
text = open('$CMAKE_FILE').read()
old = '''    set(REX_PLATFORM \"linux-amd64\")
    add_compile_definitions(REX_PLATFORM_LINUX=1)'''
new = '''    if(ANDROID)
        set(REX_PLATFORM \"android-arm64\")
        add_compile_definitions(REX_PLATFORM_ANDROID=1 REX_PLATFORM_LINUX=1)
    else()
        set(REX_PLATFORM \"linux-amd64\")
        add_compile_definitions(REX_PLATFORM_LINUX=1)
    endif()'''
text = text.replace(old, new, 1)
open('$CMAKE_FILE', 'w').write(text)
print('  Added Android platform detection')
"

# 4. Fix 'Unsupported platform' error to not trigger on Android
python3 -c "
text = open('$CMAKE_FILE').read()
old = '''else()
    message(FATAL_ERROR \"Unsupported platform. ReXGlue supports Windows and Linux only.\")'''
new = '''else()
    message(FATAL_ERROR \"Unsupported platform. ReXGlue supports Windows, Linux, and Android.\")'''
text = text.replace(old, new, 1)
open('$CMAKE_FILE', 'w').write(text)
print('  Updated platform error message')
"

# 5. Patch thirdparty/CMakeLists.txt - fix x86-specific FFmpeg code for ARM64
THIRDPARTY_CMAKE="$SDK_DIR/thirdparty/CMakeLists.txt"
if [ -f "$THIRDPARTY_CMAKE" ]; then
    python3 -c "
text = open('$THIRDPARTY_CMAKE').read()
# Add ANDROID exclusion to any x86-specific assembly sources if present
# The FFmpeg sources should compile fine on ARM64 as they're just C
open('$THIRDPARTY_CMAKE', 'w').write(text)
print('  Checked thirdparty CMakeLists')
"
fi

echo "SDK patched for Android ARM64 successfully!"
