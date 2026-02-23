# Real-recompile

Static recompilation of an Xbox 360 title using [rexglue-sdk](https://github.com/rexglue/rexglue-sdk) v0.1.2.

ReXGlue converts Xbox 360 PowerPC code into portable C++ that compiles to a native x86-64 executable with full GPU/audio/input runtime support (Vulkan graphics, SDL2 input, XMA audio).

## Prerequisites

- **Clang 18+** (required by the SDK)
- **CMake 3.25+** and **Ninja**
- **GTK3** dev libraries (Linux)
- **Vulkan** dev libraries
- `default.xex` in project root

## Quick Start

```bash
# 1. Download rexglue-sdk
./scripts/setup_rexglue_sdk.sh

# 2. Generate C++ from XEX
./scripts/codegen.sh

# 3. Build
./scripts/build.sh

# 4. Run
./build/realrecompile
```

## Project Structure

```
├── default.xex                    # Xbox 360 executable (input)
├── realrecompile_config.toml      # Codegen configuration
├── generated/                     # rexglue-generated C++ (from codegen)
│   ├── sources.cmake              # Auto-generated CMake source list
│   ├── realrecompile_config.h     # PPC memory layout defines
│   ├── realrecompile_init.cpp/h   # Function mapping table
│   └── realrecompile_recomp.*.cpp # Recompiled PPC→x86 functions
├── src/app/main.cpp               # Application entry point (GTK+/Vulkan)
├── CMakeLists.txt                 # Build system
├── CMakePresets.json              # Build presets (Debug/Release)
├── scripts/
│   ├── setup_rexglue_sdk.sh       # Download SDK
│   ├── codegen.sh                 # Run code generation
│   └── build.sh                   # Build executable
└── third_party/rexglue-sdk/       # SDK (downloaded, gitignored)
```

## How It Works

1. **Analysis**: `rexglue codegen` disassembles the XEX, discovers 17000+ functions, resolves branches and jump tables
2. **Code generation**: Each PPC function is translated to a C++ function operating on a virtual PPC context
3. **Compilation**: Generated C++ compiles with Clang to a ~31MB native executable
4. **Runtime**: The rexglue runtime provides Xbox 360 kernel emulation, Vulkan-based GPU rendering, SDL2 input, and XMA audio decoding

## CI

GitHub Actions automatically:
- Downloads rexglue-sdk v0.1.2
- Runs codegen (if `default.xex` present)
- Builds the Linux executable
- Uploads the binary as an artifact

## Configuration

Edit `realrecompile_config.toml` for codegen options:

```toml
project_name = "realrecompile"
file_path = "default.xex"
out_directory_path = "generated"

# Optimizations
ctr_as_local = true
cr_as_local = true
```

See the [rexglue-sdk docs](https://github.com/rexglue/rexglue-sdk) for all available options.

## Credits

- [ReXGlue](https://github.com/rexglue/rexglue-sdk) — Xbox 360 static recompilation SDK
- [Xenia](https://github.com/xenia-project) — Xbox 360 emulation research
- [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) — Static recompilation pioneer
