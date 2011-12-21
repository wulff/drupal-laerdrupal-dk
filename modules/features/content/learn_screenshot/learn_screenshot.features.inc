<?php
/**
 * @file
 * learn_screenshot.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function learn_screenshot_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function learn_screenshot_node_info() {
  $items = array(
    'learn_screenshot' => array(
      'name' => t('Screenshot'),
      'base' => 'node_content',
      'description' => t('Et screenshot, som kan indsættes i forskellige indholdstyper.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
