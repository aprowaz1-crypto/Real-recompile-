#!/usr/bin/env bash
set -euo pipefail

BUILD_DIR="${1:-build/runtime-linux}"

cmake -S . -B "$BUILD_DIR" -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_PLATFORM_WRAPPERS=ON \
  -DBUILD_SMOKE_TEST=ON

cmake --build "$BUILD_DIR" -j

echo "[ok] Native Linux build completed: $BUILD_DIR"
