<?php
/**
 * @file
 * frame_browser.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function frame_browser_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function frame_browser_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function frame_browser_node_info() {
  $items = array(
    'model' => array(
      'name' => t('Model'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Model Name'),
      'help' => '',
    ),
  );
  return $items;
}
