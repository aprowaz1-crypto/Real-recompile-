cmake_minimum_required(VERSION 3.20)

project(real_recompile_runtime LANGUAGES CXX)

option(BUILD_PLATFORM_WRAPPERS "Build SDL2 GPU/Input wrappers" ON)
option(BUILD_SMOKE_TEST "Build smoke test executable" ON)
option(BUILD_RECOMPILED_TARGET "Build target from generated XenonRecomp C++" OFF)
option(RECOMPILED_ENABLE_RUNNER "Build minimal runner executable for generated code" OFF)

set(GENERATED_SOURCES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/artifacts/generated" CACHE PATH "Directory with XenonRecomp generated C++ sources")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MINGW)
  add_link_options(-static-libgcc -static-libstdc++)
endif()

add_library(recomp_runtime STATIC
  src/runtime/ppc_unimplemented.cpp
)

target_include_directories(recomp_runtime
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/runtime
)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(recomp_runtime PRIVATE -mpopcnt -mlzcnt)
endif()

if(BUILD_PLATFORM_WRAPPERS)
  add_library(recomp_platform STATIC
    src/platform/gpu_wrapper.cpp
    src/platform/input_wrapper.cpp
  )

  target_include_directories(recomp_platform
    PUBLIC
      ${CMAKE_CURRENT_SOURCE_DIR}/src/platform
  )

  find_package(SDL2 QUIET)
  if(SDL2_FOUND)
    target_link_libraries(recomp_platform PUBLIC SDL2::SDL2)
  else()
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(SDL2 REQUIRED sdl2)
    target_include_directories(recomp_platform PUBLIC ${SDL2_INCLUDE_DIRS})
    target_compile_options(recomp_platform PRIVATE ${SDL2_CFLAGS_OTHER})
    target_link_libraries(recomp_platform PUBLIC ${SDL2_LIBRARIES})
  endif()
endif()

if(BUILD_SMOKE_TEST)
  add_executable(runtime_smoke
    src/smoke/main.cpp
  )

  target_link_libraries(runtime_smoke PRIVATE recomp_runtime)
  if(BUILD_PLATFORM_WRAPPERS)
    target_link_libraries(runtime_smoke PRIVATE recomp_platform)
  endif()
endif()

if(BUILD_RECOMPILED_TARGET)
  file(GLOB_RECURSE RECOMPILED_SOURCES CONFIGURE_DEPENDS
    "${GENERATED_SOURCES_DIR}/*.cpp"
    "${GENERATED_SOURCES_DIR}/*.cc"
    "${GENERATED_SOURCES_DIR}/*.cxx"
  )

  if(NOT RECOMPILED_SOURCES)
    message(FATAL_ERROR "No generated C++ sources found in: ${GENERATED_SOURCES_DIR}")
  endif()

  add_library(recompiled_game STATIC ${RECOMPILED_SOURCES})
  target_include_directories(recompiled_game
    PUBLIC
      ${GENERATED_SOURCES_DIR}
      ${CMAKE_CURRENT_SOURCE_DIR}/src/runtime
      ${CMAKE_CURRENT_SOURCE_DIR}/src/platform
      ${CMAKE_CURRENT_SOURCE_DIR}/third_party/xenonrecomp/thirdparty/simde
      ${CMAKE_CURRENT_SOURCE_DIR}/third_party/xenonrecomp/XenonUtils
  )

  target_link_libraries(recompiled_game PUBLIC recomp_runtime)
  if(BUILD_PLATFORM_WRAPPERS)
    target_link_libraries(recompiled_game PUBLIC recomp_platform)
  endif()

  if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(recompiled_game PRIVATE -include ${CMAKE_CURRENT_SOURCE_DIR}/src/runtime/compiler_compat.h)
  endif()

  add_custom_target(recompiled_all DEPENDS recompiled_game)

  if(RECOMPILED_ENABLE_RUNNER)
    add_executable(recompiled_runner
      src/runner/main.cpp
      src/runner/settings.cpp
    )
    target_include_directories(recompiled_runner PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/runner)
    target_link_libraries(recompiled_runner PRIVATE recompiled_game)

    if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
      target_link_options(recompiled_runner PRIVATE -Wl,--unresolved-symbols=ignore-all)
    endif()
  endif()
endif()
