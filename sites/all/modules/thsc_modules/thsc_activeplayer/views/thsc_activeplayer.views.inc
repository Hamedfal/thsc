<?php
/**
 *  @file thsc_activeplayer.views.inc
 *
 *  @author hamed
 *  Mar 21, 2016 8:16:53 PM
 */
function thsc_activeplayer_views_data() {
  $data = array();

  $data['thsc_activeplayer']['table']['group'] = 'THSC Active Player';
  $data['thsc_activeplayer']['table']['base'] = array(
    'field' => 'apid',
    'title' => 'THSC Seasonal Player',
    'weight' => -20
  );
  $data['thsc_activeplayer']['table']['join'] = array(
    'thsc_player' => array(
      'left_field' => 'player_id',
      'field' => 'player_id'
    )
  );
  $data['thsc_activeplayer']['apid'] = array(
    'title' => 'Seasonal Player Id',
    'field' => array(
      'handler' => 'views_handler_field_numeric'
    )
  );
  $data['thsc_activeplayer']['player_id'] = array(
    'title' => 'Member ID',
    'field' => array(
      'handler' => 'views_handler_field_numeric'
    ),
    'relationship' => array(
      'base' => 'thsc_player',
      'base field' => 'player_id',
      'handler' => 'views_handler_relationship',
      'label' => 'THSC Member Relationship',
      'title' => 'Related THSC Member'
    )
  );
  $data['thsc_activeplayer']['team_id'] = array(
    'title' => 'Team Id',
    'field' => array(
      'handler' => 'views_handler_field_numeric'
    )
  );
  $data['thsc_activeplayer']['group_id'] = array(
    'title' => 'Group Id',
    'field' => array(
      'handler' => 'views_handler_field_numeric'
    )
  );
  $data['thsc_activeplayer']['registered_at'] = array(
    'title' => 'Registered At',
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
  $data['thsc_activeplayer']['payment_made'] = array(
    'title' => 'Payment Made',
    'field' => array(
      'handler' => 'views_handler_field_boolean'
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Paid'),
      'type' => 'yes-no',
      'use equal' => TRUE
    )
  );
  $data['thsc_activeplayer']['season_id'] = array(
    'title' => 'Season Id',
    'field' => array(
      'handler' => 'views_handler_field_numeric'
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric'
    ),
    'sort' => array(
      'handler' => 'views_handler_sort'
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
      'numeric' => TRUE
    )
  );
  $data['thsc_activeplayer']['group'] = array(
    'title' => t('Group'),
    'help' => 'Group Name',
    'field' => array(
      'handler' => 'thsc_activeplayer_views_handler_field_group',
      'group' => 'THSC Active Player',
      'click sortable' => TRUE
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric'
    ),
    'sort' => array(
      'handler' => 'views_handler_sort'
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string'
    )
  );
  $data['thsc_activeplayer']['team'] = array(
      'title' => t('Team'),
      'help' => 'Team Name',
      'field' => array(
          'handler' => 'thsc_activeplayer_views_handler_field_team',
          'group' => 'THSC Active Player',
          'click sortable' => TRUE
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_numeric'
      ),
      'sort' => array(
          'handler' => 'views_handler_sort'
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_string'
      )
  );
  return $data;
}
