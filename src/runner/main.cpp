#include "settings.h"

#include <filesystem>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string config_path = "config/settings.ini";
  bool interactive = false;
  bool print_only = false;

  for (int i = 1; i < argc; ++i) {
    const std::string arg = argv[i];
    if (arg == "--config" && i + 1 < argc) {
      config_path = argv[++i];
    } else if (arg == "--settings") {
      interactive = true;
    } else if (arg == "--print-settings") {
      print_only = true;
    } else if (arg == "--help") {
      std::cout << "Usage: recompiled_runner [--config <path>] [--settings] [--print-settings]\n";
      return 0;
    }
  }

  const auto parent = std::filesystem::path(config_path).parent_path();
  if (!parent.empty()) {
    std::filesystem::create_directories(parent);
  }

  runner::Settings settings = runner::load_settings(config_path);

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
