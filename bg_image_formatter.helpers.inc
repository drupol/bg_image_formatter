<?php
/**
 * @file
 * Helper functions
 */

/**
 * Is the formatter for this module.
 */
function is_bg_image_formatter_display_type($display) {
  return $display['type'] == 'bg_image_formatter';
}

/**
 * Get the textarea values in array format.
 *
 * @future
 */
//function bg_image_formatter_extract_values(array $value, $key) {
//  return explode(PHP_EOL, trim($value[$key]));
//}
