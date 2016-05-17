<?php
/**
 *  @file thsc_player_views_handler_field_profile2.inc
 *
 *  @author hamed
 *  Apr 3, 2016 4:21:47 PM
 */

/**
 * class definition
 */
class thsc_player_views_handler_field_profile2 extends views_handler_field {

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
        if (!empty($player)) {
          $wrapper = entity_metadata_wrapper('thsc_player', $player);
          $parent = $wrapper->field_parent->value();

          switch ($this->field) {
            case 'age' :
              $birthyear = format_date($player->birthdate, 'custom', 'Y');
              $current_year = format_date(time(), 'custom', 'Y');
              return (intval($current_year) - intval($birthyear));
              break;
            case 'father' :
              $profile2 = profile2_load_by_user($parent, 'father_gardian');
              if (isset($profile2)) {
                return array(
                  '#theme' => 'thsc_player_father',
                  'profile' => $profile2
                );
              }
              break;
            case 'father_email' :
              $profile2 = profile2_load_by_user($parent, 'father_gardian');
              if (isset($profile2)) {
                $wrapper = entity_metadata_wrapper('profile2', $profile2);
                return $wrapper->field_email->value();
              }
              break;
            case 'mother' :
              $profile2 = profile2_load_by_user($parent, 'mother_gardian');
              if (isset($profile2)) {
                return array(
                  '#theme' => 'thsc_player_mother',
                  'profile' => $profile2
                );
              }
              break;
            case 'mother_email' :
              $profile2 = profile2_load_by_user($parent, 'mother_gardian');
              if (isset($profile2)) {
                $wrapper = entity_metadata_wrapper('profile2', $profile2);
                return $wrapper->field_email->value();
              }
              break;
            case 'address' :
              $profile2 = profile2_load_by_user($parent, 'address');
              if (isset($profile2)) {
                return array(
                  '#theme' => 'thsc_player_address',
                  'profile' => $profile2
                );
              }
              break;
            case 'other' :
              $profile2 = profile2_load_by_user($parent, 'other_information');
              if (isset($profile2)) {
                return array(
                  '#theme' => 'thsc_player_other',
                  'profile' => $profile2
                );
              }
              break;
          }
        }
      }
    }
    // just in case if was empty!
    return '';
  }
}