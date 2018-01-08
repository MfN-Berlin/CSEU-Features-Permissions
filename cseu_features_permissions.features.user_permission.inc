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

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer user configuration'.
  $permissions['administer user configuration'] = array(
    'name' => 'administer user configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'cseu_permissions',
  );

  // Exported permission: 'administer user permissions'.
  $permissions['administer user permissions'] = array(
    'name' => 'administer user permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'cseu_permissions',
  );

  // Exported permission: 'administer userprotect'.
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'change own e-mail'.
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own openid'.
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own password'.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cseu_blog_entry content'.
  $permissions['create cseu_blog_entry content'] = array(
    'name' => 'create cseu_blog_entry content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'create cseu_event content'.
  $permissions['create cseu_event content'] = array(
    'name' => 'create cseu_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'create cseu_slideshow_entry content'.
  $permissions['create cseu_slideshow_entry content'] = array(
    'name' => 'create cseu_slideshow_entry content',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
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

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
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

  // Exported permission: 'delete any cseu_blog_entry content'.
  $permissions['delete any cseu_blog_entry content'] = array(
    'name' => 'delete any cseu_blog_entry content',
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

  // Exported permission: 'delete any cseu_event content'.
  $permissions['delete any cseu_event content'] = array(
    'name' => 'delete any cseu_event content',
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
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cseu_slideshow_entry content'.
  $permissions['delete any cseu_slideshow_entry content'] = array(
    'name' => 'delete any cseu_slideshow_entry content',
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

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
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

  // Exported permission: 'delete own cseu_blog_entry content'.
  $permissions['delete own cseu_blog_entry content'] = array(
    'name' => 'delete own cseu_blog_entry content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'delete own cseu_event content'.
  $permissions['delete own cseu_event content'] = array(
    'name' => 'delete own cseu_event content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cseu_institution content'.
  $permissions['delete own cseu_institution content'] = array(
    'name' => 'delete own cseu_institution content',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cseu_slideshow_entry content'.
  $permissions['delete own cseu_slideshow_entry content'] = array(
    'name' => 'delete own cseu_slideshow_entry content',
    'roles' => array(
      'Manager' => 'Manager',
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

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
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

  // Exported permission: 'edit any cseu_blog_entry content'.
  $permissions['edit any cseu_blog_entry content'] = array(
    'name' => 'edit any cseu_blog_entry content',
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

  // Exported permission: 'edit any cseu_event content'.
  $permissions['edit any cseu_event content'] = array(
    'name' => 'edit any cseu_event content',
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
      'Manager' => 'Manager',
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
      'Manager' => 'Manager',
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
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any cseu_slideshow_entry content'.
  $permissions['edit any cseu_slideshow_entry content'] = array(
    'name' => 'edit any cseu_slideshow_entry content',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own account'.
  $permissions['edit own account'] = array(
    'name' => 'edit own account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
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

  // Exported permission: 'edit own cseu_blog_entry content'.
  $permissions['edit own cseu_blog_entry content'] = array(
    'name' => 'edit own cseu_blog_entry content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'edit own cseu_event content'.
  $permissions['edit own cseu_event content'] = array(
    'name' => 'edit own cseu_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'edit own cseu_slideshow_entry content'.
  $permissions['edit own cseu_slideshow_entry content'] = array(
    'name' => 'edit own cseu_slideshow_entry content',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule webforms'.
  $permissions['schedule webforms'] = array(
    'name' => 'schedule webforms',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform_scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
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
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any cseu_profile_personal profile'.
  $permissions['view any cseu_profile_personal profile'] = array(
    'name' => 'view any cseu_profile_personal profile',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any cseu_profile_tasks_interest profile'.
  $permissions['view any cseu_profile_tasks_interest profile'] = array(
    'name' => 'view any cseu_profile_tasks_interest profile',
    'roles' => array(
      'Manager' => 'Manager',
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

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Manager' => 'Manager',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
