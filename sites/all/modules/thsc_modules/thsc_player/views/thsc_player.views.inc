<?php

function thsc_player_views_data() {
  $data = array();

  $data['thsc_player']['table']['group'] = 'THSC Member';
  $data['thsc_player']['table']['base'] = array(
    'field' => 'player_id',
    'title' => 'THSC Member',
    'weight' => -20
  );

  $data['thsc_player']['player_id'] = array(
    'title' => 'Member ID',
    'field' => array(
      'handler' => 'views_handler_field_numeric'
    ),
    'sort' => array(
      'handler' => 'views_handler_sort'
    )
  );
  $data['thsc_player']['first_name'] = array(
    'title' => 'First Name',
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE
    ),
    'sort' => array(
      'handler' => 'views_handler_sort'
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string'
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string'
    )
  );

  $data['thsc_player']['last_name'] = array(
    'title' => 'Last Name',
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE
    ),
    'sort' => array(
      'handler' => 'views_handler_sort'
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string'
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string'
    )
  );

  $data['thsc_player']['gender'] = array(
    'title' => 'Gender',
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE
    ),
    'sort' => array(
      'handler' => 'views_handler_sort'
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string'
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string'
    )
  );

  $data['thsc_player']['birthdate'] = array(
    'title' => 'Birth Date',
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date'
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date'
    )
  );

  $data['thsc_player']['created'] = array(
    'title' => 'Created At',
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date'
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date'
    )
  );

  return $data;
}
