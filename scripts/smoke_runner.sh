#!/usr/bin/env bash
set -euo pipefail

BUILD_DIR="${1:-build/generated-linux}"
RUNNER_BIN="$BUILD_DIR/recompiled_runner"
CFG_PATH="artifacts/reports/runner_smoke_settings.ini"

if [[ ! -x "$RUNNER_BIN" ]]; then
  echo "Runner binary not found: $RUNNER_BIN"
  exit 1
fi

mkdir -p "$(dirname "$CFG_PATH")"

"$RUNNER_BIN" --config "$CFG_PATH" --reset-defaults
"$RUNNER_BIN" --config "$CFG_PATH" --apply-preset high
"$RUNNER_BIN" --config "$CFG_PATH" --print-settings

grep -q "width=1920" "$CFG_PATH"
grep -q "height=1080" "$CFG_PATH"

echo "[ok] runner smoke passed"
