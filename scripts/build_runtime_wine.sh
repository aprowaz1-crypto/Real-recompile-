#!/usr/bin/env bash
set -euo pipefail

BUILD_DIR="${1:-build/runtime-windows}"

export DEBIAN_FRONTEND=noninteractive
sudo apt-get update
sudo apt-get install -y \
  mingw-w64 \
  gcc-mingw-w64-x86-64 \
  g++-mingw-w64-x86-64 \
  wine64

mkdir -p "$BUILD_DIR"
rm -f "$BUILD_DIR/CMakeCache.txt"

cmake -S . -B "$BUILD_DIR" -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_TOOLCHAIN_FILE=cmake/toolchains/mingw-w64-x86_64.cmake \
  -DBUILD_PLATFORM_WRAPPERS=OFF \
  -DBUILD_SMOKE_TEST=ON

cmake --build "$BUILD_DIR" -j

echo "[ok] Windows build (for Wine) completed: $BUILD_DIR"
echo "[hint] Run: wine $BUILD_DIR/runtime_smoke.exe"
