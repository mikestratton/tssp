<?php
/**
 * @file
 * tssp_aircraft_issues_drop_down_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tssp_aircraft_issues_drop_down_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aircraft_issues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aircraft Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aircraft Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'field_aircraft' => 'field_aircraft',
    'nid' => 'nid',
    'created' => 'created',
    'body' => 'body',
    'field_severity' => 'field_severity',
    'field_ground_plane' => 'field_ground_plane',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aircraft' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_severity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ground_plane' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add Aircraft Issue';
  $handler->display->display_options['header']['area']['content'] = '<a href="?q=node/add/aircraft-issue">Add an Aircraft Issue</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Aircraft */
  $handler->display->display_options['fields']['field_aircraft']['id'] = 'field_aircraft';
  $handler->display->display_options['fields']['field_aircraft']['table'] = 'field_data_field_aircraft';
  $handler->display->display_options['fields']['field_aircraft']['field'] = 'field_aircraft';
  $handler->display->display_options['fields']['field_aircraft']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Work Order';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Flight Plan Notes */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
  /* Field: Content: Severity */
  $handler->display->display_options['fields']['field_severity']['id'] = 'field_severity';
  $handler->display->display_options['fields']['field_severity']['table'] = 'field_data_field_severity';
  $handler->display->display_options['fields']['field_severity']['field'] = 'field_severity';
  /* Field: Content: Caution: Is Aircraft Safe to Fly? */
  $handler->display->display_options['fields']['field_ground_plane']['id'] = 'field_ground_plane';
  $handler->display->display_options['fields']['field_ground_plane']['table'] = 'field_data_field_ground_plane';
  $handler->display->display_options['fields']['field_ground_plane']['field'] = 'field_ground_plane';
  $handler->display->display_options['fields']['field_ground_plane']['label'] = 'Ground Plane';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Issue';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Aircraft (field_aircraft) */
  $handler->display->display_options['sorts']['field_aircraft_target_id']['id'] = 'field_aircraft_target_id';
  $handler->display->display_options['sorts']['field_aircraft_target_id']['table'] = 'field_data_field_aircraft';
  $handler->display->display_options['sorts']['field_aircraft_target_id']['field'] = 'field_aircraft_target_id';
  /* Contextual filter: Content: Aircraft (field_aircraft) */
  $handler->display->display_options['arguments']['field_aircraft_target_id']['id'] = 'field_aircraft_target_id';
  $handler->display->display_options['arguments']['field_aircraft_target_id']['table'] = 'field_data_field_aircraft';
  $handler->display->display_options['arguments']['field_aircraft_target_id']['field'] = 'field_aircraft_target_id';
  $handler->display->display_options['arguments']['field_aircraft_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_aircraft_target_id']['summary']['format'] = 'default_summary';
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
    'aircraft_issue' => 'aircraft_issue',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'aircraft-issues';
  $export['aircraft_issues'] = $view;

  return $export;
}
