#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 1 ]]; then
  echo "Usage: $0 /path/to/default.xex"
  exit 1
fi

XEX_PATH="$1"
XENON_BUILD_DIR="${XENON_BUILD_DIR:-build/xenonrecomp}"
ANALYSIS_DIR="${ANALYSIS_DIR:-artifacts/analysis}"
GENERATED_DIR="${GENERATED_DIR:-artifacts/generated}"
XENON_RECOMP_BIN="${XENON_RECOMP_BIN:-}"
XENON_PPC_CONTEXT_HEADER="${XENON_PPC_CONTEXT_HEADER:-third_party/xenonrecomp/XenonUtils/ppc_context.h}"

mkdir -p "$GENERATED_DIR"

if [[ -z "$XENON_RECOMP_BIN" ]]; then
  for candidate in \
    "$XENON_BUILD_DIR/XenonRecomp" \
    "$XENON_BUILD_DIR/XenonRecomp/XenonRecomp"; do
    if [[ -x "$candidate" && ! -d "$candidate" ]]; then
      XENON_RECOMP_BIN="$candidate"
      break
    fi
  done
fi

if [[ -z "$XENON_RECOMP_BIN" || ! -x "$XENON_RECOMP_BIN" || -d "$XENON_RECOMP_BIN" ]]; then
  echo "XenonRecomp binary not found. Tried:"
  echo "  - $XENON_BUILD_DIR/XenonRecomp"
  echo "  - $XENON_BUILD_DIR/XenonRecomp/XenonRecomp"
  exit 1
fi

if [[ -n "${XENON_RECOMP_ARGS:-}" ]]; then
  # shellcheck disable=SC2086
  "$XENON_RECOMP_BIN" $XENON_RECOMP_ARGS
else
  usage_text="$($XENON_RECOMP_BIN 2>&1 || true)"
  if grep -qi "input TOML file path" <<<"$usage_text"; then
    CONFIG_PATH="${XENON_RECOMP_CONFIG_PATH:-$ANALYSIS_DIR/recompiler.toml}"
    config_dir="$(dirname "$CONFIG_PATH")"
    mkdir -p "$config_dir"

    rel_xex="$(realpath --relative-to="$config_dir" "$XEX_PATH")"
    rel_out="$(realpath --relative-to="$config_dir" "$GENERATED_DIR")"
    rel_jump="$(realpath --relative-to="$config_dir" "$ANALYSIS_DIR/jump_table.toml")"

    cat > "$CONFIG_PATH" <<EOF
[main]
file_path = "$rel_xex"
out_directory_path = "$rel_out"
switch_table_file_path = "$rel_jump"

# Fill these per-game addresses for best results:
# restgprlr_14_address = 0x0
# savegprlr_14_address = 0x0
# restfpr_14_address = 0x0
# savefpr_14_address = 0x0
# restvmx_14_address = 0x0
# savevmx_14_address = 0x0
# restvmx_64_address = 0x0
# savevmx_64_address = 0x0
EOF

    "$XENON_RECOMP_BIN" "$CONFIG_PATH" "$XENON_PPC_CONTEXT_HEADER"
  else
    "$XENON_RECOMP_BIN" \
      "$XEX_PATH" \
      --functions "$ANALYSIS_DIR/functions.toml" \
      --jump-table "$ANALYSIS_DIR/jump_table.toml" \
      --output "$GENERATED_DIR"
  fi
fi

echo "[ok] Generated sources in $GENERATED_DIR"
