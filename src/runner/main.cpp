#include "settings.h"

#include <filesystem>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string config_path = "config/settings.ini";
  bool interactive = false;
  bool print_only = false;
  bool reset_defaults = false;
  bool save_after_changes = false;
  bool apply_preset_requested = false;
  runner::QualityPreset requested_preset = runner::QualityPreset::Medium;

  for (int i = 1; i < argc; ++i) {
    const std::string arg = argv[i];
    if (arg == "--config" && i + 1 < argc) {
      config_path = argv[++i];
    } else if (arg == "--settings") {
      interactive = true;
    } else if (arg == "--print-settings") {
      print_only = true;
    } else if (arg == "--reset-defaults") {
      reset_defaults = true;
      save_after_changes = true;
    } else if (arg == "--apply-preset" && i + 1 < argc) {
      runner::QualityPreset parsed{};
      if (runner::parse_quality_preset(argv[++i], parsed)) {
        requested_preset = parsed;
        apply_preset_requested = true;
        save_after_changes = true;
      } else {
        std::cerr << "Unknown preset. Use: low|medium|high|ultra\n";
        return 1;
      }
    } else if (arg == "--help") {
      std::cout << "Usage: recompiled_runner [--config <path>] [--settings] [--print-settings] [--apply-preset <low|medium|high|ultra>] [--reset-defaults]\n";
      return 0;
    }
  }

  const auto parent = std::filesystem::path(config_path).parent_path();
  if (!parent.empty()) {
    std::filesystem::create_directories(parent);
  }

  runner::Settings settings = runner::load_settings(config_path);

  if (reset_defaults) {
    runner::reset_to_defaults(settings);
  }

  if (apply_preset_requested) {
    runner::apply_quality_preset(settings, requested_preset);
  }

  if (save_after_changes) {
    if (!runner::save_settings(config_path, settings)) {
      std::cerr << "Failed to save settings to: " << config_path << '\n';
      return 1;
    }
  }

  if (print_only) {
    runner::print_settings(settings);
    return 0;
  }

  if (interactive) {
    runner::interactive_settings_menu(settings);
    if (!runner::save_settings(config_path, settings)) {
      std::cerr << "Failed to save settings to: " << config_path << '\n';
      return 1;
    }
    std::cout << "Settings saved to: " << config_path << '\n';
    return 0;
  }

  std::cout << "recompiled_runner bootstrap\n";
  std::cout << "Use --settings to open settings menu.\n";
  runner::print_settings(settings);
  return 0;
}
