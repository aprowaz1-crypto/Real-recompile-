#!/usr/bin/env bash
set -euo pipefail

# Build the realrecompile executable
BUILD_TYPE="${BUILD_TYPE:-Release}"
BUILD_DIR="build"

echo "Building realrecompile (${BUILD_TYPE})..."

if [ "${TARGET:-}" = "ios" ] || [ "${PLATFORM_TARGET:-}" = "ios" ]; then
    cmake -B "${BUILD_DIR}" -G Xcode \
        -DCMAKE_SYSTEM_NAME=iOS \
        -DCMAKE_OSX_ARCHITECTURES=arm64 \
        -DCMAKE_OSX_DEPLOYMENT_TARGET=14.0 \
        -DCMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_ALLOWED=NO \
        -DCMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_REQUIRED=NO \
        -DCMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_IDENTITY="" \
        -DCMAKE_BUILD_TYPE="${BUILD_TYPE}"

    cmake --build "${BUILD_DIR}" --config "${BUILD_TYPE}"
    APP_PATH="${BUILD_DIR}/${BUILD_TYPE}-iphoneos/realrecompile.app"
    echo "[ok] Built iOS app bundle: ${APP_PATH}"
else
    cmake -B "${BUILD_DIR}" -G Ninja \
        -DCMAKE_C_COMPILER=clang-18 \
        -DCMAKE_CXX_COMPILER=clang++-18 \
        -DCMAKE_BUILD_TYPE="${BUILD_TYPE}"

    cmake --build "${BUILD_DIR}" -j$(nproc)
    echo "[ok] Built: ${BUILD_DIR}/realrecompile"
    file "${BUILD_DIR}/realrecompile"
    ls -lh "${BUILD_DIR}/realrecompile"
fi
