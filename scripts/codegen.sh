#!/usr/bin/env bash
set -euo pipefail

# Run rexglue codegen to generate C++ from default.xex
SDK_DIR="third_party/rexglue-sdk/linux-amd64"
REXGLUE="${SDK_DIR}/bin/rexglue"

if [ ! -f "${REXGLUE}" ]; then
    echo "[error] rexglue not found. Run: ./scripts/setup_rexglue_sdk.sh"
    exit 1
fi

if [ ! -f "default.xex" ]; then
    echo "[error] default.xex not found in project root"
    exit 1
fi

echo "Running rexglue codegen..."
"${REXGLUE}" codegen realrecompile_config.toml

echo "[ok] Code generation complete. Generated files in generated/"
ls generated/ | wc -l
