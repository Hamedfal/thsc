<?php

class thsc_game_views_handler_field_team_a extends views_handler_field_entity {

  function render($values) {
    if ($entity = $this->get_value($values)) {
      if ($this->options['field'] == 'team_home') {
        return $entity->teams[0]['team_name'];
      }
      else if ($this->options['field'] == 'team_away') {
        return $entity->teams[1]['team_name'];
      }
    }
    return '(not found)';
  }
}
