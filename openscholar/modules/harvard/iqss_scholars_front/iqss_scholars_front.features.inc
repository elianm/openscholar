<?php
/**
 * @file
 * iqss_scholars_front.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iqss_scholars_front_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
