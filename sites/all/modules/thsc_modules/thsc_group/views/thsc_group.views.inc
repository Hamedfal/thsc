<?php
/**
 *  @file thsc_group.views.inc
 *
 *  @author hamed
 *  May 15, 2016 8:48:18 PM
 */
function thsc_group_views_data() {
  $data = array();

  $data['thsc_group']['table']['group'] = 'THSC Groups';
  $data['thsc_group']['table']['base'] = array(
    'field' => 'group_id',
    'title' => 'THSC Group',
    'weight' => -20
  );
  $data['thsc_group']['table']['join'] = array(
    'thsc_activeplayer' => array(
      'left_field' => 'group_id',
      'field' => 'group_id'
    )
  );
  $data['thsc_group']['group_id'] = array(
    'title' => 'Group Id',
    'field' => array(
      'handler' => 'views_handler_field_numeric'
    ),
    'relationship' => array(
      'base' => 'thsc_activeplayer',
      'base field' => 'group_id',
      'handler' => 'views_handler_relationship',
      'label' => 'THSC Group Relationship',
      'title' => 'Related THSC Group'
    )
  );
  $data['thsc_group']['group_name'] = array(
    'title' => 'Group',
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

  return $data;
}