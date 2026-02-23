#!/usr/bin/env bash
set -euo pipefail

GEN_DIR="${1:-artifacts/generated}"

python3 scripts/fix_generated_labels.py "$GEN_DIR"
