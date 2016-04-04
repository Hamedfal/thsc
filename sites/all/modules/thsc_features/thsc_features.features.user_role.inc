<?php
/**
 * @file
 * thsc_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function thsc_features_user_default_roles() {
  $roles = array();

  // Exported role: THSC Manager.
  $roles['THSC Manager'] = array(
    'name' => 'THSC Manager',
    'weight' => 3,
  );

  // Exported role: THSC Staff.
  $roles['THSC Staff'] = array(
    'name' => 'THSC Staff',
    'weight' => 4,
  );

  return $roles;
}
