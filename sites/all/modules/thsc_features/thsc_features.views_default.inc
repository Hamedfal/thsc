<?php
/**
 * @file
 * thsc_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function thsc_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_list_of_games';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Practices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What\'s New';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_practice_location' => 'field_practice_location',
    'practice_time' => 'practice_time',
  );
  $handler->display->display_options['style_options']['default'] = 'practice_time';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_practice_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'practice_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 0,
    'display_length' => '10',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Practice Location */
  $handler->display->display_options['fields']['field_practice_location']['id'] = 'field_practice_location';
  $handler->display->display_options['fields']['field_practice_location']['table'] = 'field_data_field_practice_location';
  $handler->display->display_options['fields']['field_practice_location']['field'] = 'field_practice_location';
  /* Field: Content: Practice Time */
  $handler->display->display_options['fields']['practice_time']['id'] = 'practice_time';
  $handler->display->display_options['fields']['practice_time']['table'] = 'field_data_practice_time';
  $handler->display->display_options['fields']['practice_time']['field'] = 'practice_time';
  $handler->display->display_options['fields']['practice_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'thsc_practice' => 'thsc_practice',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'practices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Pratices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'practices-xls';
  $export['clone_of_list_of_games'] = $view;

  $view = new view();
  $view->name = 'list_of_games';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'List of Games';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List of Games';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'datatables';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Game';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Game Time */
  $handler->display->display_options['fields']['game_time']['id'] = 'game_time';
  $handler->display->display_options['fields']['game_time']['table'] = 'field_data_game_time';
  $handler->display->display_options['fields']['game_time']['field'] = 'game_time';
  $handler->display->display_options['fields']['game_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['game_time']['settings'] = array(
    'format_type' => 'medium_sortable',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Home Team */
  $handler->display->display_options['fields']['team_home']['id'] = 'team_home';
  $handler->display->display_options['fields']['team_home']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['team_home']['field'] = 'team_home';
  $handler->display->display_options['fields']['team_home']['element_label_colon'] = FALSE;
  /* Field: Content: Away Team */
  $handler->display->display_options['fields']['team_away']['id'] = 'team_away';
  $handler->display->display_options['fields']['team_away']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['team_away']['field'] = 'team_away';
  $handler->display->display_options['fields']['team_away']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'thsc_game' => 'thsc_game',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'games';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'List of Games';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'games-xls';
  $export['list_of_games'] = $view;

  $view = new view();
  $view->name = 'members_in_season';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Members In Season';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members In Season';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'datatables';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_parent_thsc_player']['id'] = 'reverse_field_parent_thsc_player';
  $handler->display->display_options['relationships']['reverse_field_parent_thsc_player']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_parent_thsc_player']['field'] = 'reverse_field_parent_thsc_player';
  $handler->display->display_options['relationships']['reverse_field_parent_thsc_player']['required'] = TRUE;
  /* Relationship: THSC Active Player: Related THSC Member */
  $handler->display->display_options['relationships']['player_id']['id'] = 'player_id';
  $handler->display->display_options['relationships']['player_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['relationships']['player_id']['field'] = 'player_id';
  $handler->display->display_options['relationships']['player_id']['relationship'] = 'reverse_field_parent_thsc_player';
  $handler->display->display_options['relationships']['player_id']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'address' => 'address',
    'father_gardian' => 'father_gardian',
    'other_information' => 'other_information',
    'mother_gardian' => 'mother_gardian',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* Field: THSC Member Information: File No */
  $handler->display->display_options['fields']['field_file_no']['id'] = 'field_file_no';
  $handler->display->display_options['fields']['field_file_no']['table'] = 'field_data_field_file_no';
  $handler->display->display_options['fields']['field_file_no']['field'] = 'field_file_no';
  $handler->display->display_options['fields']['field_file_no']['relationship'] = 'reverse_field_parent_thsc_player';
  /* Field: THSC Active Player: Payment Made */
  $handler->display->display_options['fields']['payment_made']['id'] = 'payment_made';
  $handler->display->display_options['fields']['payment_made']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['payment_made']['field'] = 'payment_made';
  $handler->display->display_options['fields']['payment_made']['relationship'] = 'reverse_field_parent_thsc_player';
  /* Field: THSC Active Player: Season Id */
  $handler->display->display_options['fields']['season_id']['id'] = 'season_id';
  $handler->display->display_options['fields']['season_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['season_id']['field'] = 'season_id';
  $handler->display->display_options['fields']['season_id']['relationship'] = 'reverse_field_parent_thsc_player';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: THSC Active Player: Season Id */
  $handler->display->display_options['arguments']['season_id']['id'] = 'season_id';
  $handler->display->display_options['arguments']['season_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['arguments']['season_id']['field'] = 'season_id';
  $handler->display->display_options['arguments']['season_id']['relationship'] = 'reverse_field_parent_thsc_player';
  $handler->display->display_options['arguments']['season_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['season_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['season_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['season_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'members-in-season/%';
  $export['members_in_season'] = $view;

  $view = new view();
  $view->name = 'members_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'thsc_player';
  $view->human_name = 'Members List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_file_no' => 'field_file_no',
    'field_parent' => 'field_parent',
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'birthdate' => 'birthdate',
    'gender' => 'gender',
  );
  $handler->display->display_options['style_options']['default'] = 'last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_file_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parent' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'birthdate' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gender' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'no_pagination',
    'length_change' => 0,
    'display_length' => '100',
  );
  /* Field: THSC Member Information: File No */
  $handler->display->display_options['fields']['field_file_no']['id'] = 'field_file_no';
  $handler->display->display_options['fields']['field_file_no']['table'] = 'field_data_field_file_no';
  $handler->display->display_options['fields']['field_file_no']['field'] = 'field_file_no';
  /* Field: THSC Member Information: Parent */
  $handler->display->display_options['fields']['field_parent']['id'] = 'field_parent';
  $handler->display->display_options['fields']['field_parent']['table'] = 'field_data_field_parent';
  $handler->display->display_options['fields']['field_parent']['field'] = 'field_parent';
  $handler->display->display_options['fields']['field_parent']['settings'] = array(
    'link' => 0,
  );
  /* Field: THSC Member: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  /* Field: THSC Member: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  /* Field: THSC Member: Birth Date */
  $handler->display->display_options['fields']['birthdate']['id'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['birthdate']['field'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['birthdate']['second_date_format'] = 'long';
  /* Field: THSC Member: Gender */
  $handler->display->display_options['fields']['gender']['id'] = 'gender';
  $handler->display->display_options['fields']['gender']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['gender']['field'] = 'gender';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'memberslist';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'memberslist-xls';
  $export['members_list'] = $view;

  $view = new view();
  $view->name = 'seasonal_data';
  $view->description = 'List of all parents and their children for a given season';
  $view->tag = 'default';
  $view->base_table = 'thsc_player';
  $view->human_name = 'Seasonal Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seasonal Data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'datatables';
  /* Relationship: THSC Active Player: Related THSC Member */
  $handler->display->display_options['relationships']['player_id']['id'] = 'player_id';
  $handler->display->display_options['relationships']['player_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['relationships']['player_id']['field'] = 'player_id';
  /* Field: THSC Active Player: Season Id */
  $handler->display->display_options['fields']['season_id']['id'] = 'season_id';
  $handler->display->display_options['fields']['season_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['season_id']['field'] = 'season_id';
  $handler->display->display_options['fields']['season_id']['exclude'] = TRUE;
  /* Field: THSC Active Player: Member ID */
  $handler->display->display_options['fields']['player_id']['id'] = 'player_id';
  $handler->display->display_options['fields']['player_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['player_id']['field'] = 'player_id';
  $handler->display->display_options['fields']['player_id']['exclude'] = TRUE;
  /* Field: THSC Member Information: File No */
  $handler->display->display_options['fields']['field_file_no']['id'] = 'field_file_no';
  $handler->display->display_options['fields']['field_file_no']['table'] = 'field_data_field_file_no';
  $handler->display->display_options['fields']['field_file_no']['field'] = 'field_file_no';
  $handler->display->display_options['fields']['field_file_no']['exclude'] = TRUE;
  /* Field: THSC Member: Created At */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: THSC Member: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  /* Field: THSC Member: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  /* Field: THSC Member: Gender */
  $handler->display->display_options['fields']['gender']['id'] = 'gender';
  $handler->display->display_options['fields']['gender']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['gender']['field'] = 'gender';
  /* Field: THSC Member: Birth Date */
  $handler->display->display_options['fields']['birthdate']['id'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['birthdate']['field'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['birthdate']['custom_date_format'] = '1';
  $handler->display->display_options['fields']['birthdate']['second_date_format'] = 'long';
  /* Field: THSC Member: Player Age */
  $handler->display->display_options['fields']['age']['id'] = 'age';
  $handler->display->display_options['fields']['age']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['age']['field'] = 'age';
  $handler->display->display_options['fields']['age']['label'] = 'Age';
  /* Field: THSC Active Player: Registered At */
  $handler->display->display_options['fields']['registered_at']['id'] = 'registered_at';
  $handler->display->display_options['fields']['registered_at']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['registered_at']['field'] = 'registered_at';
  $handler->display->display_options['fields']['registered_at']['date_format'] = 'short';
  $handler->display->display_options['fields']['registered_at']['second_date_format'] = 'long';
  /* Field: THSC Active Player: Payment Made */
  $handler->display->display_options['fields']['payment_made']['id'] = 'payment_made';
  $handler->display->display_options['fields']['payment_made']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['payment_made']['field'] = 'payment_made';
  $handler->display->display_options['fields']['payment_made']['not'] = 0;
  /* Field: THSC Member: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  /* Field: THSC Member: Father */
  $handler->display->display_options['fields']['father']['id'] = 'father';
  $handler->display->display_options['fields']['father']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['father']['field'] = 'father';
  /* Field: THSC Member: Father Email */
  $handler->display->display_options['fields']['father_email']['id'] = 'father_email';
  $handler->display->display_options['fields']['father_email']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['father_email']['field'] = 'father_email';
  /* Field: THSC Member: Mother */
  $handler->display->display_options['fields']['mother']['id'] = 'mother';
  $handler->display->display_options['fields']['mother']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['mother']['field'] = 'mother';
  /* Field: THSC Member: Mother Email */
  $handler->display->display_options['fields']['mother_email']['id'] = 'mother_email';
  $handler->display->display_options['fields']['mother_email']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['mother_email']['field'] = 'mother_email';
  /* Field: THSC Member: Other Information */
  $handler->display->display_options['fields']['other']['id'] = 'other';
  $handler->display->display_options['fields']['other']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['other']['field'] = 'other';
  /* Contextual filter: THSC Active Player: Season Id */
  $handler->display->display_options['arguments']['season_id']['id'] = 'season_id';
  $handler->display->display_options['arguments']['season_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['arguments']['season_id']['field'] = 'season_id';
  $handler->display->display_options['arguments']['season_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['season_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['season_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['season_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'seasonaldata/%';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xlsx';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-value Report.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'seasonaldata-xls/%';
  $export['seasonal_data'] = $view;

  $view = new view();
  $view->name = 'thscview_group_assignment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'thsc_activeplayer';
  $view->human_name = 'THSC Group Assignment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'THSC Group Assignment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'apid' => 'apid',
    'player_id' => 'player_id',
    'group_id' => 'group_id',
    'team_id' => 'team_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'gender' => 'gender',
    'birthdate' => 'birthdate',
    'php' => 'php',
    'payment_made' => 'payment_made',
    'group' => 'group',
    'team' => 'team',
  );
  $handler->display->display_options['style_options']['default'] = 'first_name';
  $handler->display->display_options['style_options']['info'] = array(
    'apid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'player_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'group_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'team_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gender' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'birthdate' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'payment_made' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'group' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'team' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 1,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'no_pagination',
    'length_change' => 0,
    'display_length' => '100',
  );
  /* Relationship: THSC Active Player: Related THSC Member */
  $handler->display->display_options['relationships']['player_id']['id'] = 'player_id';
  $handler->display->display_options['relationships']['player_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['relationships']['player_id']['field'] = 'player_id';
  $handler->display->display_options['relationships']['player_id']['required'] = TRUE;
  /* Field: THSC Active Player: Seasonal Player Id */
  $handler->display->display_options['fields']['apid']['id'] = 'apid';
  $handler->display->display_options['fields']['apid']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['apid']['field'] = 'apid';
  $handler->display->display_options['fields']['apid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apid']['separator'] = '';
  /* Field: THSC Active Player: Member ID */
  $handler->display->display_options['fields']['player_id']['id'] = 'player_id';
  $handler->display->display_options['fields']['player_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['player_id']['field'] = 'player_id';
  $handler->display->display_options['fields']['player_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['player_id']['separator'] = '';
  /* Field: THSC Active Player: Group Id */
  $handler->display->display_options['fields']['group_id']['id'] = 'group_id';
  $handler->display->display_options['fields']['group_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['group_id']['field'] = 'group_id';
  $handler->display->display_options['fields']['group_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_id']['separator'] = '';
  /* Field: THSC Active Player: Team Id */
  $handler->display->display_options['fields']['team_id']['id'] = 'team_id';
  $handler->display->display_options['fields']['team_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['team_id']['field'] = 'team_id';
  $handler->display->display_options['fields']['team_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['team_id']['separator'] = '';
  /* Field: Bulk operations: THSC Active Player */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::thsc_activeplayer_assign_group_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change Group/Team',
      'settings' => array(
        'target_group_id' => '0',
      ),
    ),
  );
  /* Field: THSC Member: First Name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['relationship'] = 'player_id';
  $handler->display->display_options['fields']['first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['first_name']['alter']['path'] = 'thsc_player/[player_id]';
  /* Field: THSC Member: Last Name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['relationship'] = 'player_id';
  $handler->display->display_options['fields']['last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['last_name']['alter']['path'] = 'thsc_player/[player_id]';
  /* Field: THSC Member: Gender */
  $handler->display->display_options['fields']['gender']['id'] = 'gender';
  $handler->display->display_options['fields']['gender']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['gender']['field'] = 'gender';
  $handler->display->display_options['fields']['gender']['relationship'] = 'player_id';
  /* Field: THSC Member: Birth Date */
  $handler->display->display_options['fields']['birthdate']['id'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['table'] = 'thsc_player';
  $handler->display->display_options['fields']['birthdate']['field'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['relationship'] = 'player_id';
  $handler->display->display_options['fields']['birthdate']['date_format'] = 'uc_store';
  $handler->display->display_options['fields']['birthdate']['second_date_format'] = 'long';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Age';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return intval(format_date($row->birthdate, \'custom\', \'Y\'));';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo intval(format_date(time(), \'custom\', \'Y\')) - $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: THSC Active Player: Payment Made */
  $handler->display->display_options['fields']['payment_made']['id'] = 'payment_made';
  $handler->display->display_options['fields']['payment_made']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['payment_made']['field'] = 'payment_made';
  $handler->display->display_options['fields']['payment_made']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['payment_made']['alter']['path'] = 'thsc_activeplayer/[apid]';
  $handler->display->display_options['fields']['payment_made']['not'] = 0;
  /* Field: THSC Active Player: Group */
  $handler->display->display_options['fields']['group']['id'] = 'group';
  $handler->display->display_options['fields']['group']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['group']['field'] = 'group';
  /* Field: THSC Active Player: Team */
  $handler->display->display_options['fields']['team']['id'] = 'team';
  $handler->display->display_options['fields']['team']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['fields']['team']['field'] = 'team';
  /* Contextual filter: THSC Active Player: Season Id */
  $handler->display->display_options['arguments']['season_id']['id'] = 'season_id';
  $handler->display->display_options['arguments']['season_id']['table'] = 'thsc_activeplayer';
  $handler->display->display_options['arguments']['season_id']['field'] = 'season_id';
  $handler->display->display_options['arguments']['season_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['season_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['season_id']['default_argument_options']['code'] = 'return variable_get(\'thsc_active_season\', 0);';
  $handler->display->display_options['arguments']['season_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['season_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['season_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/structure/thsc-group-assignment';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'THSC Group Assignment';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xlsx';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Group Assignments.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'thsc-group-assignment-xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['thscview_group_assignment'] = $view;

  return $export;
}
