#!/usr/bin/env bash
set -euo pipefail

GENERATED_DIR="${GENERATED_DIR:-artifacts/generated}"
BUILD_DIR="${1:-build/generated-windows}"
ENABLE_RUNNER="${ENABLE_RUNNER:-OFF}"

if [[ ! -d "$GENERATED_DIR" ]]; then
  echo "Generated source directory not found: $GENERATED_DIR"
  exit 1
fi

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
  -DBUILD_SMOKE_TEST=OFF \
  -DBUILD_RECOMPILED_TARGET=ON \
  -DRECOMPILED_ENABLE_RUNNER="$ENABLE_RUNNER" \
  -DGENERATED_SOURCES_DIR="$GENERATED_DIR"

cmake --build "$BUILD_DIR" -j --target recompiled_all

if [[ "$ENABLE_RUNNER" == "ON" ]]; then
  cmake --build "$BUILD_DIR" -j --target recompiled_runner
  echo "[hint] Run: wine $BUILD_DIR/recompiled_runner.exe"
fi

echo "[ok] Generated Windows target build completed: $BUILD_DIR"
