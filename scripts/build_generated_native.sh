#!/usr/bin/env bash
set -euo pipefail

GENERATED_DIR="${GENERATED_DIR:-artifacts/generated}"
BUILD_DIR="${1:-build/generated-linux}"
ENABLE_RUNNER="${ENABLE_RUNNER:-OFF}"

if [[ ! -d "$GENERATED_DIR" ]]; then
  echo "Generated source directory not found: $GENERATED_DIR"
  exit 1
fi

cmake -S . -B "$BUILD_DIR" -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_PLATFORM_WRAPPERS=ON \
  -DBUILD_SMOKE_TEST=OFF \
  -DBUILD_RECOMPILED_TARGET=ON \
  -DRECOMPILED_ENABLE_RUNNER="$ENABLE_RUNNER" \
  -DGENERATED_SOURCES_DIR="$GENERATED_DIR"

cmake --build "$BUILD_DIR" -j --target recompiled_all

if [[ "$ENABLE_RUNNER" == "ON" ]]; then
  cmake --build "$BUILD_DIR" -j --target recompiled_runner
fi

echo "[ok] Generated native target build completed: $BUILD_DIR"
