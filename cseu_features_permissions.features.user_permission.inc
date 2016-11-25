<?php
/**
 * @file
 * cseu_features_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cseu_features_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cseu_deliverable content'.
  $permissions['create cseu_deliverable content'] = array(
    'name' => 'create cseu_deliverable content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cseu_institution content'.
  $permissions['create cseu_institution content'] = array(
    'name' => 'create cseu_institution content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cseu_task content'.
  $permissions['create cseu_task content'] = array(
    'name' => 'create cseu_task content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cseu_working_group content'.
  $permissions['create cseu_working_group content'] = array(
    'name' => 'create cseu_working_group content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cseu_deliverable content'.
  $permissions['delete any cseu_deliverable content'] = array(
    'name' => 'delete any cseu_deliverable content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cseu_institution content'.
  $permissions['delete any cseu_institution content'] = array(
    'name' => 'delete any cseu_institution content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cseu_task content'.
  $permissions['delete any cseu_task content'] = array(
    'name' => 'delete any cseu_task content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cseu_working_group content'.
  $permissions['delete any cseu_working_group content'] = array(
    'name' => 'delete any cseu_working_group content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cseu_deliverable content'.
  $permissions['delete own cseu_deliverable content'] = array(
    'name' => 'delete own cseu_deliverable content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cseu_institution content'.
  $permissions['delete own cseu_institution content'] = array(
    'name' => 'delete own cseu_institution content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cseu_task content'.
  $permissions['delete own cseu_task content'] = array(
    'name' => 'delete own cseu_task content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cseu_working_group content'.
  $permissions['delete own cseu_working_group content'] = array(
    'name' => 'delete own cseu_working_group content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cseu_deliverable content'.
  $permissions['edit any cseu_deliverable content'] = array(
    'name' => 'edit any cseu_deliverable content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cseu_institution content'.
  $permissions['edit any cseu_institution content'] = array(
    'name' => 'edit any cseu_institution content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cseu_profile_assignments profile'.
  $permissions['edit any cseu_profile_assignments profile'] = array(
    'name' => 'edit any cseu_profile_assignments profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any cseu_profile_groups_interest profile'.
  $permissions['edit any cseu_profile_groups_interest profile'] = array(
    'name' => 'edit any cseu_profile_groups_interest profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any cseu_profile_personal profile'.
  $permissions['edit any cseu_profile_personal profile'] = array(
    'name' => 'edit any cseu_profile_personal profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any cseu_profile_tasks_interest profile'.
  $permissions['edit any cseu_profile_tasks_interest profile'] = array(
    'name' => 'edit any cseu_profile_tasks_interest profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any cseu_task content'.
  $permissions['edit any cseu_task content'] = array(
    'name' => 'edit any cseu_task content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cseu_working_group content'.
  $permissions['edit any cseu_working_group content'] = array(
    'name' => 'edit any cseu_working_group content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cseu_deliverable content'.
  $permissions['edit own cseu_deliverable content'] = array(
    'name' => 'edit own cseu_deliverable content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cseu_institution content'.
  $permissions['edit own cseu_institution content'] = array(
    'name' => 'edit own cseu_institution content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cseu_profile_assignments profile'.
  $permissions['edit own cseu_profile_assignments profile'] = array(
    'name' => 'edit own cseu_profile_assignments profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own cseu_profile_groups_interest profile'.
  $permissions['edit own cseu_profile_groups_interest profile'] = array(
    'name' => 'edit own cseu_profile_groups_interest profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own cseu_profile_personal profile'.
  $permissions['edit own cseu_profile_personal profile'] = array(
    'name' => 'edit own cseu_profile_personal profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own cseu_profile_tasks_interest profile'.
  $permissions['edit own cseu_profile_tasks_interest profile'] = array(
    'name' => 'edit own cseu_profile_tasks_interest profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own cseu_task content'.
  $permissions['edit own cseu_task content'] = array(
    'name' => 'edit own cseu_task content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cseu_working_group content'.
  $permissions['edit own cseu_working_group content'] = array(
    'name' => 'edit own cseu_working_group content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any cseu_profile_assignments profile'.
  $permissions['view any cseu_profile_assignments profile'] = array(
    'name' => 'view any cseu_profile_assignments profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any cseu_profile_groups_interest profile'.
  $permissions['view any cseu_profile_groups_interest profile'] = array(
    'name' => 'view any cseu_profile_groups_interest profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any cseu_profile_personal profile'.
  $permissions['view any cseu_profile_personal profile'] = array(
    'name' => 'view any cseu_profile_personal profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any cseu_profile_tasks_interest profile'.
  $permissions['view any cseu_profile_tasks_interest profile'] = array(
    'name' => 'view any cseu_profile_tasks_interest profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own cseu_profile_assignments profile'.
  $permissions['view own cseu_profile_assignments profile'] = array(
    'name' => 'view own cseu_profile_assignments profile',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own cseu_profile_groups_interest profile'.
  $permissions['view own cseu_profile_groups_interest profile'] = array(
    'name' => 'view own cseu_profile_groups_interest profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own cseu_profile_personal profile'.
  $permissions['view own cseu_profile_personal profile'] = array(
    'name' => 'view own cseu_profile_personal profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own cseu_profile_tasks_interest profile'.
  $permissions['view own cseu_profile_tasks_interest profile'] = array(
    'name' => 'view own cseu_profile_tasks_interest profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
