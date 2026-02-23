#!/usr/bin/env bash
set -euo pipefail

# Build the realrecompile executable
BUILD_TYPE="${BUILD_TYPE:-Release}"
BUILD_DIR="build"

echo "Building realrecompile (${BUILD_TYPE})..."

cmake -B "${BUILD_DIR}" -G Ninja \
    -DCMAKE_C_COMPILER=clang-18 \
    -DCMAKE_CXX_COMPILER=clang++-18 \
    -DCMAKE_BUILD_TYPE="${BUILD_TYPE}"

cmake --build "${BUILD_DIR}" -j$(nproc)

echo "[ok] Built: ${BUILD_DIR}/realrecompile"
file "${BUILD_DIR}/realrecompile"
ls -lh "${BUILD_DIR}/realrecompile"
