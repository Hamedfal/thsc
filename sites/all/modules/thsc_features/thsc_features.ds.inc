<?php
/**
 * @file
 * thsc_features.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function thsc_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|address|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'address';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_street',
        1 => 'field_postal_code',
      ),
      'right' => array(
        2 => 'field_apt_no',
        3 => 'field_city',
        4 => 'field_province',
      ),
    ),
    'fields' => array(
      'field_street' => 'left',
      'field_postal_code' => 'left',
      'field_apt_no' => 'right',
      'field_city' => 'right',
      'field_province' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['profile2|address|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|address|profile2_summary';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'address';
  $ds_layout->view_mode = 'profile2_summary';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_street',
        1 => 'field_apt_no',
        2 => 'field_city',
        3 => 'field_postal_code',
      ),
    ),
    'fields' => array(
      'field_street' => 'ds_content',
      'field_apt_no' => 'ds_content',
      'field_city' => 'ds_content',
      'field_postal_code' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['profile2|address|profile2_summary'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|father_gardian|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'father_gardian';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_first_name',
        1 => 'field_last_name',
      ),
      'right' => array(
        2 => 'field_home_phone',
        3 => 'field_other_phone',
        4 => 'field_email',
      ),
    ),
    'fields' => array(
      'field_first_name' => 'left',
      'field_last_name' => 'left',
      'field_home_phone' => 'right',
      'field_other_phone' => 'right',
      'field_email' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['profile2|father_gardian|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mother_gardian|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mother_gardian';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_first_name',
        1 => 'field_last_name',
      ),
      'right' => array(
        2 => 'field_home_phone',
        3 => 'field_other_phone',
        4 => 'field_email',
      ),
    ),
    'fields' => array(
      'field_first_name' => 'left',
      'field_last_name' => 'left',
      'field_home_phone' => 'right',
      'field_other_phone' => 'right',
      'field_email' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['profile2|mother_gardian|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mother_guardian|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mother_guardian';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_first_name_mother',
        1 => 'field_last_name_mother',
      ),
      'right' => array(
        2 => 'field_home_phone_mother',
        3 => 'field_other_phone_mother',
        4 => 'field_email_mother',
      ),
    ),
    'fields' => array(
      'field_first_name_mother' => 'left',
      'field_last_name_mother' => 'left',
      'field_home_phone_mother' => 'right',
      'field_other_phone_mother' => 'right',
      'field_email_mother' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|mother_guardian|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|other_information|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'other_information';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_yes_no',
        1 => 'field_first_name',
        2 => 'field_last_name',
        3 => 'field_home_phone',
      ),
      'right' => array(
        4 => 'field_hear_about_us',
        5 => 'field_extra_notes',
      ),
    ),
    'fields' => array(
      'field_yes_no' => 'left',
      'field_first_name' => 'left',
      'field_last_name' => 'left',
      'field_home_phone' => 'left',
      'field_hear_about_us' => 'right',
      'field_extra_notes' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['profile2|other_information|default'] = $ds_layout;

  return $export;
}

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
