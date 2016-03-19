<?php

function thsc_game_views_data_alter(&$data) {
  $data['node']['team_home']['moved to'] = array('views_entity_node', 'team_home');
  $data['views_entity_node']['team_home'] = array(
    'field' => array(
      'title' => t('Home Team'),
      'help' => t('THSC Home Team in a Game.'),
      'handler' => 'thsc_game_views_handler_field_team',
    ),
  );
  $data['node']['team_away']['moved to'] = array('views_entity_node', 'team_away');
  $data['views_entity_node']['team_away'] = array(
    'field' => array(
      'title' => t('Away Team'),
      'help' => t('THSC Away Team in a Game.'),
      'handler' => 'thsc_game_views_handler_field_team',
    ),
  );

  return $data;
}

