<?php
/**
 * @file
 * frame_browser.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function frame_browser_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:models
  $menu_links['main-menu:models'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'models',
    'router_path' => 'models',
    'link_title' => 'Models',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Models');


  return $menu_links;
}
