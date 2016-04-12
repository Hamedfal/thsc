<?php
/**
 * @file
 * thsc_features.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function thsc_features_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'profile2_summary';
  $ds_view_mode->label = 'Profile2 Summary';
  $ds_view_mode->entities = array(
    'profile2' => 'profile2',
  );
  $export['profile2_summary'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'thsc_member_summary';
  $ds_view_mode->label = 'THSC Member Summary';
  $ds_view_mode->entities = array(
    'thsc_player' => 'thsc_player',
  );
  $export['thsc_member_summary'] = $ds_view_mode;

  return $export;
}
