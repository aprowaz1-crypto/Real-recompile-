#!/usr/bin/env bash
set -euo pipefail

# Run rexglue codegen to generate C++ from default.xex
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"

if [ "$(uname -s)" = "Darwin" ]; then
    SDK_BASE="${PROJECT_ROOT}/third_party/rexglue-sdk"
    if [ -x "${SDK_BASE}/macos-amd64/bin/rexglue" ]; then
        REXGLUE="${SDK_BASE}/macos-amd64/bin/rexglue"
    elif [ -x "${SDK_BASE}/macos-arm64/bin/rexglue" ]; then
        REXGLUE="${SDK_BASE}/macos-arm64/bin/rexglue"
    else
        echo "[error] rexglue not found. Run: ./scripts/setup_rexglue_sdk.sh"
        exit 1
    fi
else
    SDK_DIR="third_party/rexglue-sdk/linux-amd64"
    REXGLUE="${SDK_DIR}/bin/rexglue"
    if [ ! -f "${REXGLUE}" ]; then
        echo "[error] rexglue not found. Run: ./scripts/setup_rexglue_sdk.sh"
        exit 1
    fi
fi

cd "${PROJECT_ROOT}"

if [ ! -f "default.xex" ]; then
    echo "[error] default.xex not found in project root"
    exit 1
fi

echo "Running rexglue codegen..."
"${REXGLUE}" codegen realrecompile_config.toml

echo "[ok] Code generation complete. Generated files in generated/"
ls generated/ | wc -l
