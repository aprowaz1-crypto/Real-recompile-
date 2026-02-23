#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 2 ]]; then
  echo "Usage: $0 /path/to/default.xex https://github.com/<owner>/<repo>.git"
  echo "Optional: XENON_BRANCH=<branch> ENABLE_RUNNER=ON"
  exit 1
fi

XEX_PATH="$1"
REPO_URL="$2"

if [[ ! -f "$XEX_PATH" ]]; then
  echo "XEX file not found: $XEX_PATH"
  exit 1
fi

export XENON_REPO_URL="$REPO_URL"

./scripts/setup_codespace.sh
./scripts/build_xenon_tools.sh
./scripts/analyse_xex.sh "$XEX_PATH"
./scripts/recompile_xex.sh "$XEX_PATH"
./scripts/find_unimplemented.sh
if ! ./scripts/build_generated_native.sh; then
  echo "[warn] Generated C++ build failed. Artifacts are still available for manual fixes."
fi

if [[ "${ENABLE_RUNNER:-OFF}" == "ON" ]]; then
  if ! ENABLE_RUNNER=ON ./scripts/build_generated_native.sh; then
    echo "[warn] Runner build failed due generated code compile errors."
  fi
fi

echo "[ok] Full native pipeline completed"
echo "[info] Generated dir: artifacts/generated"
echo "[info] Analysis dir: artifacts/analysis"
