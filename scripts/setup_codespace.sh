#!/usr/bin/env bash
set -euo pipefail

export DEBIAN_FRONTEND=noninteractive

if ! sudo apt-get update; then
  if [[ -f /etc/apt/sources.list.d/yarn.list ]]; then
    sudo mv /etc/apt/sources.list.d/yarn.list /etc/apt/sources.list.d/yarn.list.disabled
    sudo apt-get update
  else
    echo "apt-get update failed and no known fallback repository was found"
    exit 1
  fi
fi

sudo apt-get install -y \
  build-essential \
  cmake \
  ninja-build \
  clang \
  llvm \
  lld \
  libcapstone-dev \
  git \
  git-lfs \
  pkg-config \
  python3 \
  python3-pip \
  libsdl2-dev

git lfs install --skip-repo

echo "[ok] Codespaces environment is ready"
