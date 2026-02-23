# Real-recompile-

Toolkit for an **authorized** XenonRecomp workflow in GitHub Codespaces.

## GitHub Actions (CI)

Workflow file:
- `.github/workflows/ci.yml`

Jobs:
- `runtime-native` — builds Linux runtime targets
- `runtime-wine` — builds Windows target with MinGW/Wine
- `xenon-pipeline` — runs analyse/recompile, tries generated build, auto-fixes missing labels, retries build, uploads artifacts (only if `default.xex` exists in repo root)

To run manually:
- GitHub → **Actions** → **CI** → **Run workflow**

Artifacts uploaded by CI:
- `runtime-linux`
- `runtime-windows`
- `analysis-artifacts`
- `generated-sources`
- `reports`
- `generated-runner-windows` (`recompiled_runner.exe`, best-effort)

Runner smoke in CI:
- builds native `recompiled_runner`
- applies preset and validates persisted config
- stores smoke config in `artifacts/reports/runner_smoke_settings.ini`

## Full one-command pipeline

If you have `default.xex`, run everything in one command:

If you only have one game file/archive, first extract `default.xex`:

```bash
./scripts/extract_default_xex.sh /path/to/game_file
```

This will place file at:
- `input/default.xex`

Native Linux output:

```bash
./scripts/full_pipeline_native.sh /workspaces/Real-recompile-/input/default.xex https://github.com/<owner>/<repo>.git
```

Windows (Wine-target) output:

```bash
./scripts/full_pipeline_wine.sh /workspaces/Real-recompile-/input/default.xex https://github.com/<owner>/<repo>.git
```

Optional runner build:

```bash
ENABLE_RUNNER=ON ./scripts/full_pipeline_native.sh /path/to/default.xex https://github.com/<owner>/<repo>.git
ENABLE_RUNNER=ON ./scripts/full_pipeline_wine.sh /path/to/default.xex https://github.com/<owner>/<repo>.git
```

## PC + Wine runtime build

Native Linux (PC):

```bash
./scripts/build_runtime_native.sh
./build/runtime-linux/runtime_smoke
```

Windows build for Wine:

```bash
./scripts/build_runtime_wine.sh
wine ./build/runtime-windows/runtime_smoke.exe
```

Notes:
- Native Linux build enables SDL2 platform wrappers (`gpu_wrapper` + `input_wrapper`).
- Wine build defaults to wrappers `OFF` to avoid missing MinGW SDL2 packages in bare Codespaces.
- If you install MinGW SDL2, set `-DBUILD_PLATFORM_WRAPPERS=ON` for Windows too.

## 1) Environment setup (Codespaces)

```bash
chmod +x scripts/*.sh
./scripts/setup_codespace.sh
```

Installs:
- `cmake`, `ninja-build`
- `clang`, `llvm`
- `libcapstone-dev`
- `git`, `git-lfs`, `pkg-config`
- `libsdl2-dev`

## 2) Clone + build XenonAnalyse / XenonRecomp

```bash
export XENON_REPO_URL="https://github.com/<owner>/<repo>.git"
./scripts/build_xenon_tools.sh
```

Optional env vars:
- `XENON_SRC_DIR` (default: `third_party/xenonrecomp`)
- `XENON_BUILD_DIR` (default: `build/xenonrecomp`)
- `XENON_BRANCH` (optional)

## 3) Binary analysis

```bash
./scripts/analyse_xex.sh /path/to/default.xex
```

Output:
- `artifacts/analysis/functions.toml`
- `artifacts/analysis/jump_table.toml`

## 4) Recompiler code generation

```bash
./scripts/recompile_xex.sh /path/to/default.xex
```

Output:
- Generated C++ goes to `artifacts/generated/`

If your XenonRecomp build uses different CLI flags, pass custom args:

```bash
XENON_RECOMP_ARGS="<your tool args>" ./scripts/recompile_xex.sh /path/to/default.xex
```

## 4.1) Build generated C++ in one command

Native Linux build (links generated C++ with runtime/platform):

```bash
./scripts/build_generated_native.sh
```

Windows build for Wine (links generated C++ with runtime):

```bash
./scripts/build_generated_wine.sh
```

Optional runner executable:

```bash
ENABLE_RUNNER=ON ./scripts/build_generated_native.sh
ENABLE_RUNNER=ON ./scripts/build_generated_wine.sh
```

Runner settings commands:

```bash
./build/generated-linux/recompiled_runner --print-settings
./build/generated-linux/recompiled_runner --settings
./build/generated-linux/recompiled_runner --apply-preset high
./build/generated-linux/recompiled_runner --reset-defaults
./build/generated-linux/recompiled_runner --config config/settings.ini --apply-preset medium
```

Notes:
- generated source dir default is `artifacts/generated`
- override it with `GENERATED_DIR=/your/generated/path`

## 5) Refactoring and fixing unimplemented instructions

Use the helper files:
- `src/runtime/ppc_unimplemented.h`
- `src/runtime/ppc_unimplemented.cpp`

Implemented examples (x64 intrinsics):
- `cntlzw` via `_lzcnt_u32`
- `popcntw` via `_mm_popcnt_u32`
- `rlwinm` rotate-left + PPC mask
- `fres_approx` via `_mm_rcp_ss`

## 6) GPU/Input wrapper scaffolding

Files:
- `src/platform/gpu_wrapper.h`
- `src/platform/gpu_wrapper.cpp`
- `src/platform/input_wrapper.h`
- `src/platform/input_wrapper.cpp`

This gives a neutral platform layer for mapping:
- Xenos-style draw flow to SDL2 renderer first (then upgrade to D3D/Vulkan/OpenGL)
- XInput-like pad state to SDL GameController

For a native Windows renderer path later:
- keep `GpuWrapper` as abstraction boundary
- add `GpuWrapperDx11`/`GpuWrapperDx12` implementation behind the same interface
- keep gameplay/runtime code unchanged while swapping backend per platform

## Typical flow

```bash
./scripts/setup_codespace.sh
./scripts/build_xenon_tools.sh
./scripts/analyse_xex.sh /workspace/game/default.xex
./scripts/recompile_xex.sh /workspace/game/default.xex
./scripts/build_generated_native.sh
```

## Notes

- Use this only for binaries you own or are licensed to process.
- The exact XenonRecomp CLI differs by fork/commit; scripts expose override env vars for that.