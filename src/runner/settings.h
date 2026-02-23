#pragma once

#include <cstdint>
#include <string>

namespace runner {

enum class QualityPreset {
  Low,
  Medium,
  High,
  Ultra,
};

struct Settings {
  std::uint32_t width = 1280;
  std::uint32_t height = 720;
  bool fullscreen = false;
  bool vsync = true;
  float master_volume = 1.0f;
  float input_deadzone = 0.15f;
  float render_scale = 1.0f;
};

Settings default_settings();
Settings load_settings(const std::string& path);
bool save_settings(const std::string& path, const Settings& settings);
bool parse_quality_preset(const std::string& value, QualityPreset& out);
const char* quality_preset_name(QualityPreset preset);
void apply_quality_preset(Settings& settings, QualityPreset preset);
void reset_to_defaults(Settings& settings);
void print_settings(const Settings& settings);
void interactive_settings_menu(Settings& settings);

} // namespace runner
