<?php
/**
 * @file
 * Helper functions.
 */

/**
 * Get the settings values in array format.
 */
function bg_image_formatter_extract_settings_values(array $settings, $key) {
  $data = explode(PHP_EOL, trim($settings[$key]));

  $data = array_map(function ($value) {
    $value = strip_tags($value);
    return trim($value, ',');
  }, $data);

  return $data;
}
