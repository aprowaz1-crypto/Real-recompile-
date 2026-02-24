# Real-recompile - ReXGlue Recompiled Project
# Xbox 360 static recompilation using rexglue-sdk v0.1.2

cmake_minimum_required(VERSION 3.25)
project(realrecompile LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ---------- Find ReXGlue SDK ----------
# Priority: REXSDK env var > CMAKE_PREFIX_PATH > bundled third_party path
if(DEFINED ENV{REXSDK})
    list(PREPEND CMAKE_PREFIX_PATH $ENV{REXSDK})
else()
    # Auto-detect bundled SDK
    if(WIN32)
        set(_BUNDLED_SDK "${CMAKE_CURRENT_SOURCE_DIR}/third_party/rexglue-sdk/win-amd64")
    elseif(ANDROID)
        set(_BUNDLED_SDK "${CMAKE_CURRENT_SOURCE_DIR}/third_party/rexglue-sdk/android-arm64")
    else()
        set(_BUNDLED_SDK "${CMAKE_CURRENT_SOURCE_DIR}/third_party/rexglue-sdk/linux-amd64")
    endif()
    if(EXISTS "${_BUNDLED_SDK}/lib/cmake/rexglue/rexglueConfig.cmake")
        list(PREPEND CMAKE_PREFIX_PATH "${_BUNDLED_SDK}")
        # For Android cross-compilation: allow CMake to find packages in SDK dir
        if(ANDROID)
            list(APPEND CMAKE_FIND_ROOT_PATH "${_BUNDLED_SDK}")
            # Some packages install cmake configs in share/ instead of lib/cmake/
            list(APPEND CMAKE_PREFIX_PATH "${_BUNDLED_SDK}/share")
            list(APPEND CMAKE_PREFIX_PATH "${_BUNDLED_SDK}/share/cmake")
            set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE BOTH)
        endif()
        message(STATUS "Using bundled ReXGlue SDK at: ${_BUNDLED_SDK}")
    endif()
endif()

find_package(rexglue REQUIRED)

# ---------- User source files ----------
set(APP_SOURCES)

# Platform-specific GUI entry point (from SDK share dir)
if(ANDROID)
    # Android uses NativeActivity, not the windowed app framework
    list(APPEND APP_SOURCES src/app/main_android.cpp)
elseif(WIN32)
    list(APPEND APP_SOURCES src/app/main.cpp)
    list(APPEND APP_SOURCES ${REXGLUE_SHARE_DIR}/windowed_app_main_win.cpp)
else()
    list(APPEND APP_SOURCES src/app/main.cpp)
    list(APPEND APP_SOURCES ${REXGLUE_SHARE_DIR}/windowed_app_main_posix.cpp)
endif()

# ---------- Generated recompiled code ----------
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/generated/sources.cmake")
    include(generated/sources.cmake)
    list(APPEND APP_SOURCES ${GENERATED_SOURCES})
    message(STATUS "Including generated recompiled sources")
else()
    message(WARNING "No generated sources found. Run: rexglue codegen realrecompile_config.toml")
endif()

# ---------- Executable ----------
if(ANDROID)
    # Build as shared library for NativeActivity
    add_library(realrecompile SHARED ${APP_SOURCES})
elseif(WIN32)
    add_executable(realrecompile WIN32 ${APP_SOURCES})
else()
    add_executable(realrecompile ${APP_SOURCES})
endif()

target_include_directories(realrecompile PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/generated
)

target_link_libraries(realrecompile PRIVATE
    rex::core
    rex::runtime
    rex::kernel
    rex::graphics
    rex::ui
    rex::input
    rex::audio
)

# ---------- Platform-specific settings ----------
if(ANDROID)
    # Android ARM64 - Vulkan, no GTK
    find_library(LOG_LIB log)
    find_library(ANDROID_LIB android)
    find_library(VULKAN_LIB vulkan)
    target_link_libraries(realrecompile PRIVATE
        ${LOG_LIB} ${ANDROID_LIB} ${VULKAN_LIB})

    # Whole-archive for kernel hooks
    target_link_options(realrecompile PRIVATE
        -Wl,--whole-archive
        $<TARGET_FILE:rex::kernel>
        -Wl,--no-whole-archive
    )
    # Allow unresolved Xbox kernel symbols
    target_link_options(realrecompile PRIVATE -Wl,--unresolved-symbols=ignore-in-object-files)

elseif(UNIX AND NOT APPLE)
    # GTK3 for entry point (windowed_app_main_posix.cpp)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
    target_include_directories(realrecompile PRIVATE ${GTK3_INCLUDE_DIRS})
    target_link_libraries(realrecompile PRIVATE ${GTK3_LIBRARIES})

    # Whole-archive linking for kernel hooks
    target_link_options(realrecompile PRIVATE
        -Wl,--whole-archive
        $<TARGET_FILE:rex::kernel>
        -Wl,--no-whole-archive
    )
    # Large executable support for recompiled code
    target_link_options(realrecompile PRIVATE -Wl,--no-relax)
    target_compile_options(realrecompile PRIVATE -mcmodel=large)

    # Allow unresolved Xbox kernel symbols not yet implemented in the SDK
    target_link_options(realrecompile PRIVATE -Wl,--unresolved-symbols=ignore-in-object-files)
endif()

if(NOT MSVC AND NOT ANDROID)
    target_compile_options(realrecompile PRIVATE -msse4.1)
endif()

# SEH support on Windows (clang-cl or MSVC)
if(MSVC)
    target_compile_options(realrecompile PRIVATE /EHa)
elseif(WIN32)
    target_compile_options(realrecompile PRIVATE -fms-extensions -fexceptions)
endif()

# Windows-specific linking
if(WIN32)
    # System libraries needed by the SDK
    target_link_libraries(realrecompile PRIVATE
        d3d12 dxgi dxguid d3dcompiler
        ws2_32 winmm ole32 oleaut32 uuid
        shell32 advapi32 user32 gdi32 imm32
        setupapi version shlwapi
    )
    # Whole-archive for kernel hooks + ignore unresolved Xbox symbols
    # Works for both clang-cl (MSVC=TRUE) and clang++ (GNU driver)
    target_link_options(realrecompile PRIVATE
        "LINKER:/WHOLEARCHIVE:$<TARGET_FILE:rex::kernel>"
        "LINKER:/FORCE:UNRESOLVED"
        "LINKER:/IGNORE:4217"
    )
endif()

# ---------- Codegen convenience target ----------
# Run: cmake --build build --target codegen
add_custom_target(codegen
    COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/third_party/rexglue-sdk/linux-amd64/bin/rexglue
            codegen ${CMAKE_CURRENT_SOURCE_DIR}/realrecompile_config.toml
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMENT "Generating recompiled C++ code from XEX"
    VERBATIM
)
