<?php
/**
 * @file
 * thsc_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function thsc_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-thsc-management-menu.
  $menus['menu-thsc-management-menu'] = array(
    'menu_name' => 'menu-thsc-management-menu',
    'title' => 'THSC Management Menu',
    'description' => 'Links related to THSC Managements',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links related to THSC Managements');
  t('Main menu');
  t('THSC Management Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
