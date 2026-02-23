#!/usr/bin/env bash
set -euo pipefail

GENERATED_DIR="${1:-artifacts/generated}"
REPORT_PATH="${2:-artifacts/reports/unimplemented.txt}"

mkdir -p "$(dirname "$REPORT_PATH")"

if [[ ! -d "$GENERATED_DIR" ]]; then
  echo "Generated directory not found: $GENERATED_DIR"
  exit 1
fi

grep -RInE "unimplemented|TODO|UNSUPPORTED|trap\(|assert\(false|__debugbreak|FIXME" "$GENERATED_DIR" \
  | sort -u > "$REPORT_PATH" || true

echo "[ok] Report saved to $REPORT_PATH"
wc -l "$REPORT_PATH" | awk '{print "[info] lines: " $1}'
