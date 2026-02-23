#!/usr/bin/env bash
set -euo pipefail

XENON_REPO_URL="${XENON_REPO_URL:-}"
XENON_SRC_DIR="${XENON_SRC_DIR:-third_party/xenonrecomp}"
XENON_BUILD_DIR="${XENON_BUILD_DIR:-build/xenonrecomp}"
XENON_BRANCH="${XENON_BRANCH:-}"

if [[ -z "$XENON_REPO_URL" ]]; then
  echo "Set XENON_REPO_URL first, e.g. https://github.com/<owner>/<repo>.git"
  exit 1
fi

mkdir -p "$(dirname "$XENON_SRC_DIR")" "$(dirname "$XENON_BUILD_DIR")"

if [[ ! -d "$XENON_SRC_DIR/.git" ]]; then
  if [[ -n "$XENON_BRANCH" ]]; then
    git clone --recursive --branch "$XENON_BRANCH" "$XENON_REPO_URL" "$XENON_SRC_DIR"
  else
    git clone --recursive "$XENON_REPO_URL" "$XENON_SRC_DIR"
  fi
else
  git -C "$XENON_SRC_DIR" submodule update --init --recursive
fi

cmake -S "$XENON_SRC_DIR" -B "$XENON_BUILD_DIR" -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_COMPILER=clang \
  -DCMAKE_CXX_COMPILER=clang++

if cmake --build "$XENON_BUILD_DIR" --target XenonAnalyse XenonRecomp; then
  echo "[ok] Built XenonAnalyse + XenonRecomp"
else
  echo "[warn] Named targets not found, building all targets"
  cmake --build "$XENON_BUILD_DIR"
fi

echo "[ok] Build completed in $XENON_BUILD_DIR"
