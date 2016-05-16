<?php
/**
 *  @file thsc_activeplayer_views_handler_field_team.inc
 *
 *  @author hamed
 *  May 15, 2016 9:40:31 PM
 */

/**
 * class definition
 */
class thsc_activeplayer_views_handler_field_team extends views_handler_field {

  /**
   * Query
   */
  function query() {
  }

  /**
   * Render
   */
  function render($values) {
    $thscteams = &drupal_static(__FUNCTION__);
    if (!empty($values) && !empty($values->thsc_activeplayer_team_id)) {
      $team_id = $values->thsc_activeplayer_team_id;
      if (!isset($thscteams[$team_id])) {
        $team = thsc_team_load($team_id);
        if ($team) {
          $team_name = $team->team_name;
        }
        else {
          $team_name = 'unknown';
        }
        $thscteams[$team_id] = $team_name;
      }
      return $thscteams[$team_id];
    }
    return "";
  }
}