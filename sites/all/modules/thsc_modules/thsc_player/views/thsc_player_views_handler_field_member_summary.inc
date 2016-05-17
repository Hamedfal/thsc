<?php
/**
 *  @file thsc_player_views_handler_field_member_summary.inc
 *
 *  @author hamed
 *  Mar 21, 2016 10:14:56 PM
 */


/**
 * class definition
 */
class thsc_player_views_handler_field_member_summary extends views_handler_field {

  /**
   * Query
   */
  function query() {
  }

  /**
   * Render
   */
  function render($values) {
    if (isset($values) && is_object($values) && isset($values->_field_data) && is_array($values->_field_data)) {
      if (isset($values->_field_data['player_id']['entity'])) {
      $player = $values->_field_data['player_id']['entity'];
      return thsc_player_view($player, 'thsc_member_summary');
      }
    }
    return '';
  }
}