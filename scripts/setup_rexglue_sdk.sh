#!/usr/bin/env bash
set -euo pipefail

# Download and extract rexglue-sdk for the current platform
SDK_VERSION="${REXGLUE_SDK_VERSION:-v0.1.2}"
SDK_DIR="third_party/rexglue-sdk"

download_sdk() {
    local PLATFORM="$1"
    local ARCHIVE="${SDK_DIR}/rexglue-sdk-${PLATFORM}.zip"
    local DEST="${SDK_DIR}/${PLATFORM}"

    if [ -f "${DEST}/lib/cmake/rexglue/rexglueConfig.cmake" ]; then
        echo "[ok] rexglue-sdk ${SDK_VERSION} already extracted at ${DEST}"
        return 0
    fi

    echo "Downloading rexglue-sdk ${SDK_VERSION} (${PLATFORM})..."
    mkdir -p "${SDK_DIR}"
    if ! curl -L -o "${ARCHIVE}" \
        "https://github.com/rexglue/rexglue-sdk/releases/download/${SDK_VERSION}/rexglue-sdk-${PLATFORM}.zip"; then
        echo "[warn] Failed to download ${PLATFORM} SDK, skipping"
        return 1
    fi

    echo "Extracting ${PLATFORM}..."
    unzip -qo "${ARCHIVE}" -d "${SDK_DIR}"
    rm -f "${ARCHIVE}"

    echo "[ok] rexglue-sdk ${SDK_VERSION} installed at ${DEST}"
    return 0
}

if [ "$(uname -s)" = "Linux" ]; then
    download_sdk "linux-amd64"
elif [ "$(uname -s)" = "Darwin" ]; then
    # Always download macOS SDK for codegen/host tools
    MACOS_ARCH="$(uname -m)"
    if [ "$MACOS_ARCH" = "arm64" ]; then
        download_sdk "macos-arm64" || download_sdk "macos-amd64" || true
    else
        download_sdk "macos-amd64" || download_sdk "macos-arm64" || true
    fi
    # Also download iOS SDK if targeting iOS
    if [ "${TARGET:-}" = "ios" ] || [ "${PLATFORM_TARGET:-}" = "ios" ]; then
        download_sdk "ios-arm64" || true
    fi
else
    download_sdk "win-amd64"
fi
