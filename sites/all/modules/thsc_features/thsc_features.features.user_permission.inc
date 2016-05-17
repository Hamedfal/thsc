<?php
/**
 * @file
 * thsc_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function thsc_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access ad node'.
  $permissions['access ad node'] = array(
    'name' => 'access ad node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'access ad statistics'.
  $permissions['access ad statistics'] = array(
    'name' => 'access ad statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access connections tab'.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'connector',
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
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer attributes'.
  $permissions['administer attributes'] = array(
    'name' => 'administer attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer event status'.
  $permissions['administer event status'] = array(
    'name' => 'administer event status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'event_calendar',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer model types'.
  $permissions['administer model types'] = array(
    'name' => 'administer model types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'model',
  );

  // Exported permission: 'administer models'.
  $permissions['administer models'] = array(
    'name' => 'administer models',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'model',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer nivo slider'.
  $permissions['administer nivo slider'] = array(
    'name' => 'administer nivo slider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nivo_slider',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer order workflow'.
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'administer own product features'.
  $permissions['administer own product features'] = array(
    'name' => 'administer own product features',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer product attributes'.
  $permissions['administer product attributes'] = array(
    'name' => 'administer product attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer product classes'.
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product features'.
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product options'.
  $permissions['administer product options'] = array(
    'name' => 'administer product options',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer products'.
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer store'.
  $permissions['administer store'] = array(
    'name' => 'administer store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_store',
  );

  // Exported permission: 'administer stylizer'.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer thsc_group'.
  $permissions['administer thsc_group'] = array(
    'name' => 'administer thsc_group',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'thsc_group',
  );

  // Exported permission: 'administer thsc_player'.
  $permissions['administer thsc_player'] = array(
    'name' => 'administer thsc_player',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'thsc_player',
  );

  // Exported permission: 'administer thsc_team'.
  $permissions['administer thsc_team'] = array(
    'name' => 'administer thsc_team',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'thsc_team',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer viewport'.
  $permissions['administer viewport'] = array(
    'name' => 'administer viewport',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'viewport',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'count ad clicks'.
  $permissions['count ad clicks'] = array(
    'name' => 'count ad clicks',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'count ad impressions'.
  $permissions['count ad impressions'] = array(
    'name' => 'count ad impressions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'simpleads',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event_calendar content'.
  $permissions['create event_calendar content'] = array(
    'name' => 'create event_calendar content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_file_no'.
  $permissions['create field_file_no'] = array(
    'name' => 'create field_file_no',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create orders'.
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create season content'.
  $permissions['create season content'] = array(
    'name' => 'create season content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simpleads content'.
  $permissions['create simpleads content'] = array(
    'name' => 'create simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create sponcer content'.
  $permissions['create sponcer content'] = array(
    'name' => 'create sponcer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create thsc_game content'.
  $permissions['create thsc_game content'] = array(
    'name' => 'create thsc_game content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create thsc_location content'.
  $permissions['create thsc_location content'] = array(
    'name' => 'create thsc_location content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create thsc_practice content'.
  $permissions['create thsc_practice content'] = array(
    'name' => 'create thsc_practice content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'currency.currency.administer'.
  $permissions['currency.currency.administer'] = array(
    'name' => 'currency.currency.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'currency',
  );

  // Exported permission: 'currency.currency_exchanger.administer'.
  $permissions['currency.currency_exchanger.administer'] = array(
    'name' => 'currency.currency_exchanger.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'currency',
  );

  // Exported permission: 'currency.currency_locale_pattern.administer'.
  $permissions['currency.currency_locale_pattern.administer'] = array(
    'name' => 'currency.currency_locale_pattern.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'currency',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_calendar content'.
  $permissions['delete any event_calendar content'] = array(
    'name' => 'delete any event_calendar content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
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

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any season content'.
  $permissions['delete any season content'] = array(
    'name' => 'delete any season content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any simpleads content'.
  $permissions['delete any simpleads content'] = array(
    'name' => 'delete any simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sponcer content'.
  $permissions['delete any sponcer content'] = array(
    'name' => 'delete any sponcer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any thsc_game content'.
  $permissions['delete any thsc_game content'] = array(
    'name' => 'delete any thsc_game content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any thsc_location content'.
  $permissions['delete any thsc_location content'] = array(
    'name' => 'delete any thsc_location content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any thsc_practice content'.
  $permissions['delete any thsc_practice content'] = array(
    'name' => 'delete any thsc_practice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete orders'.
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_calendar content'.
  $permissions['delete own event_calendar content'] = array(
    'name' => 'delete own event_calendar content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own season content'.
  $permissions['delete own season content'] = array(
    'name' => 'delete own season content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own simpleads content'.
  $permissions['delete own simpleads content'] = array(
    'name' => 'delete own simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sponcer content'.
  $permissions['delete own sponcer content'] = array(
    'name' => 'delete own sponcer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own thsc_game content'.
  $permissions['delete own thsc_game content'] = array(
    'name' => 'delete own thsc_game content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own thsc_location content'.
  $permissions['delete own thsc_location content'] = array(
    'name' => 'delete own thsc_location content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own thsc_practice content'.
  $permissions['delete own thsc_practice content'] = array(
    'name' => 'delete own thsc_practice content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_payment',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ad_groups'.
  $permissions['delete terms in ad_groups'] = array(
    'name' => 'delete terms in ad_groups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_calendar_status'.
  $permissions['delete terms in event_calendar_status'] = array(
    'name' => 'delete terms in event_calendar_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download file'.
  $permissions['download file'] = array(
    'name' => 'download file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_file',
  );

  // Exported permission: 'edit any address profile'.
  $permissions['edit any address profile'] = array(
    'name' => 'edit any address profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_calendar content'.
  $permissions['edit any event_calendar content'] = array(
    'name' => 'edit any event_calendar content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any father_gardian profile'.
  $permissions['edit any father_gardian profile'] = array(
    'name' => 'edit any father_gardian profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any mother_gardian profile'.
  $permissions['edit any mother_gardian profile'] = array(
    'name' => 'edit any mother_gardian profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any other_information profile'.
  $permissions['edit any other_information profile'] = array(
    'name' => 'edit any other_information profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any season content'.
  $permissions['edit any season content'] = array(
    'name' => 'edit any season content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any simpleads content'.
  $permissions['edit any simpleads content'] = array(
    'name' => 'edit any simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sponcer content'.
  $permissions['edit any sponcer content'] = array(
    'name' => 'edit any sponcer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any thsc_game content'.
  $permissions['edit any thsc_game content'] = array(
    'name' => 'edit any thsc_game content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any thsc_location content'.
  $permissions['edit any thsc_location content'] = array(
    'name' => 'edit any thsc_location content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any thsc_practice content'.
  $permissions['edit any thsc_practice content'] = array(
    'name' => 'edit any thsc_practice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_file_no'.
  $permissions['edit field_file_no'] = array(
    'name' => 'edit field_file_no',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit orders'.
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'edit own address profile'.
  $permissions['edit own address profile'] = array(
    'name' => 'edit own address profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_calendar content'.
  $permissions['edit own event_calendar content'] = array(
    'name' => 'edit own event_calendar content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own father_gardian profile'.
  $permissions['edit own father_gardian profile'] = array(
    'name' => 'edit own father_gardian profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own field_file_no'.
  $permissions['edit own field_file_no'] = array(
    'name' => 'edit own field_file_no',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own mother_gardian profile'.
  $permissions['edit own mother_gardian profile'] = array(
    'name' => 'edit own mother_gardian profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own other_information profile'.
  $permissions['edit own other_information profile'] = array(
    'name' => 'edit own other_information profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own season content'.
  $permissions['edit own season content'] = array(
    'name' => 'edit own season content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own simpleads content'.
  $permissions['edit own simpleads content'] = array(
    'name' => 'edit own simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sponcer content'.
  $permissions['edit own sponcer content'] = array(
    'name' => 'edit own sponcer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own thsc_game content'.
  $permissions['edit own thsc_game content'] = array(
    'name' => 'edit own thsc_game content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own thsc_location content'.
  $permissions['edit own thsc_location content'] = array(
    'name' => 'edit own thsc_location content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own thsc_player'.
  $permissions['edit own thsc_player'] = array(
    'name' => 'edit own thsc_player',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'thsc_player',
  );

  // Exported permission: 'edit own thsc_practice content'.
  $permissions['edit own thsc_practice content'] = array(
    'name' => 'edit own thsc_practice content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ad_groups'.
  $permissions['edit terms in ad_groups'] = array(
    'name' => 'edit terms in ad_groups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_calendar_status'.
  $permissions['edit terms in event_calendar_status'] = array(
    'name' => 'edit terms in event_calendar_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manual payments'.
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_payment',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'sync local profile with connections'.
  $permissions['sync local profile with connections'] = array(
    'name' => 'sync local profile with connections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'connector',
  );

  // Exported permission: 'unconditionally delete orders'.
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
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
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all downloads'.
  $permissions['view all downloads'] = array(
    'name' => 'view all downloads',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_file',
  );

  // Exported permission: 'view all orders'.
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view any address profile'.
  $permissions['view any address profile'] = array(
    'name' => 'view any address profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any father_gardian profile'.
  $permissions['view any father_gardian profile'] = array(
    'name' => 'view any father_gardian profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any mother_gardian profile'.
  $permissions['view any mother_gardian profile'] = array(
    'name' => 'view any mother_gardian profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any other_information profile'.
  $permissions['view any other_information profile'] = array(
    'name' => 'view any other_information profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view customers'.
  $permissions['view customers'] = array(
    'name' => 'view customers',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view field_file_no'.
  $permissions['view field_file_no'] = array(
    'name' => 'view field_file_no',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own address profile'.
  $permissions['view own address profile'] = array(
    'name' => 'view own address profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own father_gardian profile'.
  $permissions['view own father_gardian profile'] = array(
    'name' => 'view own father_gardian profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own field_file_no'.
  $permissions['view own field_file_no'] = array(
    'name' => 'view own field_file_no',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own invoices'.
  $permissions['view own invoices'] = array(
    'name' => 'view own invoices',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own mother_gardian profile'.
  $permissions['view own mother_gardian profile'] = array(
    'name' => 'view own mother_gardian profile',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own orders'.
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own other_information profile'.
  $permissions['view own other_information profile'] = array(
    'name' => 'view own other_information profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own thsc_player'.
  $permissions['view own thsc_player'] = array(
    'name' => 'view own thsc_player',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'thsc_player',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_payment',
  );

  // Exported permission: 'view reports'.
  $permissions['view reports'] = array(
    'name' => 'view reports',
    'roles' => array(
      'THSC Manager' => 'THSC Manager',
      'THSC Staff' => 'THSC Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'uc_store',
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
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
