#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 1 ]]; then
  echo "Usage: $0 /path/to/game_file_or_archive"
  exit 1
fi

SRC_FILE="$1"
OUT_DIR="${2:-input}"
WORK_DIR="${WORK_DIR:-artifacts/extract_work}"

if [[ ! -f "$SRC_FILE" ]]; then
  echo "Input file not found: $SRC_FILE"
  exit 1
fi

mkdir -p "$OUT_DIR" "$WORK_DIR"
OUT_XEX="$OUT_DIR/default.xex"

ext_lower="${SRC_FILE##*.}"
ext_lower="${ext_lower,,}"

copy_if_xex() {
  if [[ "$ext_lower" == "xex" ]]; then
    cp -f "$SRC_FILE" "$OUT_XEX"
    echo "[ok] Copied XEX to $OUT_XEX"
    exit 0
  fi
}

find_in_dir() {
  local dir="$1"
  local found
  found="$(find "$dir" -type f -iname 'default.xex' | head -n 1 || true)"
  if [[ -n "$found" ]]; then
    cp -f "$found" "$OUT_XEX"
    echo "[ok] Extracted default.xex to $OUT_XEX"
    echo "[info] source: $found"
    exit 0
  fi
}

ensure_7z() {
  if ! command -v 7z >/dev/null 2>&1; then
    export DEBIAN_FRONTEND=noninteractive
    sudo apt-get update
    sudo apt-get install -y p7zip-full
  fi
}

copy_if_xex

case "$ext_lower" in
  zip|7z|rar|iso|xiso)
    ensure_7z
    rm -rf "$WORK_DIR"/*
    7z x -y -o"$WORK_DIR" "$SRC_FILE" >/dev/null
    find_in_dir "$WORK_DIR"
    ;;
  *)
    # Generic fallback: try direct search near file and then 7z anyway.
    find_in_dir "$(dirname "$SRC_FILE")"
    ensure_7z
    rm -rf "$WORK_DIR"/*
    if 7z x -y -o"$WORK_DIR" "$SRC_FILE" >/dev/null 2>&1; then
      find_in_dir "$WORK_DIR"
    fi
    ;;
esac

echo "[error] default.xex not found in input"
echo "[hint] If this is an Xbox 360 container format unsupported by 7z, extract files locally and rerun"
exit 1
