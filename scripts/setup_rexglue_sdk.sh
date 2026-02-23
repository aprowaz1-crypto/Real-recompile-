#!/usr/bin/env bash
set -euo pipefail

# Download and extract rexglue-sdk for the current platform
SDK_VERSION="${REXGLUE_SDK_VERSION:-v0.1.2}"
SDK_DIR="third_party/rexglue-sdk"

if [ "$(uname -s)" = "Linux" ]; then
    PLATFORM="linux-amd64"
else
    PLATFORM="win-amd64"
fi

ARCHIVE="${SDK_DIR}/rexglue-sdk-${PLATFORM}.zip"
DEST="${SDK_DIR}/${PLATFORM}"

if [ -f "${DEST}/lib/cmake/rexglue/rexglueConfig.cmake" ]; then
    echo "[ok] rexglue-sdk ${SDK_VERSION} already extracted at ${DEST}"
    exit 0
fi

echo "Downloading rexglue-sdk ${SDK_VERSION} (${PLATFORM})..."
mkdir -p "${SDK_DIR}"
curl -L -o "${ARCHIVE}" \
    "https://github.com/rexglue/rexglue-sdk/releases/download/${SDK_VERSION}/rexglue-sdk-${PLATFORM}.zip"

echo "Extracting..."
unzip -qo "${ARCHIVE}" -d "${SDK_DIR}"
rm -f "${ARCHIVE}"

echo "[ok] rexglue-sdk ${SDK_VERSION} installed at ${DEST}"
