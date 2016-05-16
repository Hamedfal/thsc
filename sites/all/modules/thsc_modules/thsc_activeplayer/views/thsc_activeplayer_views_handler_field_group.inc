<?php
/**
 *  @file thsc_activeplayer_views_handler_field_group.inc
 *
 *  @author hamed
 *  May 15, 2016 9:17:50 PM
 */

/**
 * class definition
 */
class thsc_activeplayer_views_handler_field_group extends views_handler_field {

  /**
   * Query
   */
  function query() {
  }

  /**
   * Render
   */
  function render($values) {
    $thscgroups = &drupal_static(__FUNCTION__);
    if (!empty($values) && !empty($values->thsc_activeplayer_group_id)) {
      $group_id = $values->thsc_activeplayer_group_id;
      if (!isset($thscgroups[$group_id])) {
        $group = thsc_group_load($group_id);
        if ($group) {
          $group_name = $group->group_name;
        }
        else {
          $group_name = 'unknown';
        }
        $thscgroups[$group_id] = $group_name;
      }
      return $thscgroups[$group_id];
    }
    return "";
  }
}