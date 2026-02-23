#pragma once

#include <cstdint>
#include <string>

namespace runner {

struct Settings {
  std::uint32_t width = 1280;
  std::uint32_t height = 720;
  bool fullscreen = false;
  bool vsync = true;
  float master_volume = 1.0f;
  float input_deadzone = 0.15f;
  float render_scale = 1.0f;
};

Settings load_settings(const std::string& path);
bool save_settings(const std::string& path, const Settings& settings);
void print_settings(const Settings& settings);
void interactive_settings_menu(Settings& settings);

} // namespace runner
