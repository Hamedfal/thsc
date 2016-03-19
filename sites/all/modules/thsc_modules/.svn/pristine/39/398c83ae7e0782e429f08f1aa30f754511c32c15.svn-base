<?php

/**
 * @file
 * Definition of thsc_game_views_handler_field_team.
 */

/**
 * Field handler to present thsc game's home team
 *
 * @ingroup views_field_handlers
 */
class thsc_game_views_handler_field_team extends views_handler_field_entity {

  function render($values) {
    if ($entity = $this->get_value($values)) {
      if ($entity->type == 'thsc_game') {
        if ($this->options['field'] == 'team_home') {
          return $entity->teams[0]['team_name'];
        }
        else if ($this->options['field'] == 'team_away') {
          return $entity->teams[1]['team_name'];
        }
      }
    }
  }

}
