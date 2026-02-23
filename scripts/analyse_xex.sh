#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 1 ]]; then
  echo "Usage: $0 /path/to/default.xex"
  exit 1
fi

XEX_PATH="$1"
XENON_BUILD_DIR="${XENON_BUILD_DIR:-build/xenonrecomp}"
ANALYSIS_DIR="${ANALYSIS_DIR:-artifacts/analysis}"
XENON_ANALYSE_BIN="${XENON_ANALYSE_BIN:-}"
XENON_ANALYSE_ARGS="${XENON_ANALYSE_ARGS:-}"

mkdir -p "$ANALYSIS_DIR"

if [[ -z "$XENON_ANALYSE_BIN" ]]; then
  for candidate in \
    "$XENON_BUILD_DIR/XenonAnalyse" \
    "$XENON_BUILD_DIR/XenonAnalyse/XenonAnalyse"; do
    if [[ -x "$candidate" && ! -d "$candidate" ]]; then
      XENON_ANALYSE_BIN="$candidate"
      break
    fi
  done
fi

if [[ -z "$XENON_ANALYSE_BIN" || ! -x "$XENON_ANALYSE_BIN" || -d "$XENON_ANALYSE_BIN" ]]; then
  echo "XenonAnalyse binary not found. Tried:"
  echo "  - $XENON_BUILD_DIR/XenonAnalyse"
  echo "  - $XENON_BUILD_DIR/XenonAnalyse/XenonAnalyse"
  exit 1
fi

JUMP_TABLE_PATH="$ANALYSIS_DIR/jump_table.toml"

if [[ -n "$XENON_ANALYSE_ARGS" ]]; then
  # shellcheck disable=SC2086
  "$XENON_ANALYSE_BIN" "$XEX_PATH" $XENON_ANALYSE_ARGS
else
  usage_text="$($XENON_ANALYSE_BIN 2>&1 || true)"
  if grep -qi "output jump table TOML" <<<"$usage_text"; then
    "$XENON_ANALYSE_BIN" "$XEX_PATH" "$JUMP_TABLE_PATH"
  else
    "$XENON_ANALYSE_BIN" "$XEX_PATH"
  fi
fi

for file in functions.toml jump_table.toml; do
  if [[ -f "$file" ]]; then
    mv "$file" "$ANALYSIS_DIR/$file"
  fi
done

if [[ -f "$JUMP_TABLE_PATH" ]]; then
  echo "[info] Jump table: $JUMP_TABLE_PATH"
fi

echo "[ok] Analysis artifacts in $ANALYSIS_DIR"
