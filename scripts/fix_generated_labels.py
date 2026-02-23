#!/usr/bin/env python3
import pathlib
import re
import sys


FUNC_START = re.compile(r"^\s*void\s+__imp__[^\(]*\([^\)]*\)\s*\{")
GOTO_LABEL = re.compile(r"\bgoto\s+(loc_[0-9A-Fa-f]+)\s*;")
DEF_LABEL = re.compile(r"^\s*(loc_[0-9A-Fa-f]+)\s*:\s*$")


def patch_file(file_path: pathlib.Path) -> int:
    lines = file_path.read_text(encoding="utf-8", errors="ignore").splitlines()
    out = []

    in_func = False
    brace_depth = 0
    used = set()
    defined = set()
    indent = "    "
    changed = 0

    for line in lines:
        if not in_func and FUNC_START.search(line):
            in_func = True
            brace_depth = 1
            used.clear()
            defined.clear()
            out.append(line)
            continue

        if in_func:
            for m in GOTO_LABEL.finditer(line):
                used.add(m.group(1))

            m_def = DEF_LABEL.search(line)
            if m_def:
                defined.add(m_def.group(1))

            opens = line.count("{")
            closes = line.count("}")
            brace_depth += opens - closes

            if brace_depth == 0:
                missing = sorted(used - defined)
                if missing:
                    for label in missing:
                        out.append(f"{indent}{label}:")
                        out.append(f"{indent}    ;")
                    changed += len(missing)
                in_func = False

            out.append(line)
            continue

        out.append(line)

    if changed:
        file_path.write_text("\n".join(out) + "\n", encoding="utf-8")
    return changed


def main() -> int:
    target = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else "artifacts/generated")
    if not target.exists():
        print(f"[error] generated dir not found: {target}")
        return 1

    total = 0
    files = sorted(target.glob("ppc_recomp.*.cpp"))
    for fp in files:
        total += patch_file(fp)

    print(f"[ok] inserted missing labels: {total}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
