<?php
/**
 * @file
 * cseu_features_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cseu_features_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 2,
  );

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => 3,
  );

  return $roles;
}
