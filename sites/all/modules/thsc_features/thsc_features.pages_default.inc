<?php
/**
 * @file
 * thsc_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function thsc_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'thsc_administration_page';
  $page->task = 'page';
  $page->admin_title = 'THSC Administration Page';
  $page->admin_description = '';
  $page->path = 'thsc_administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_thsc_administration_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'thsc_administration_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'THSC Administration';
  $display->uuid = 'e18e7904-ee89-46ee-bec0-7b4bce2b7ac0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fb628786-30c5-4b21-a76b-f87e9bd9871d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-thsc-management-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb628786-30c5-4b21-a76b-f87e9bd9871d';
    $display->content['new-fb628786-30c5-4b21-a76b-f87e9bd9871d'] = $pane;
    $display->panels['middle'][0] = 'new-fb628786-30c5-4b21-a76b-f87e9bd9871d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['thsc_administration_page'] = $page;

  return $pages;

}
