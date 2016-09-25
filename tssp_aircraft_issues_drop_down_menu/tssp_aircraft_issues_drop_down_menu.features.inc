<?php
/**
 * @file
 * tssp_aircraft_issues_drop_down_menu.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tssp_aircraft_issues_drop_down_menu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tssp_aircraft_issues_drop_down_menu_node_info() {
  $items = array(
    'aircraft' => array(
      'name' => t('Aircraft'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Aircraft Name'),
      'help' => '',
    ),
    'aircraft_issue' => array(
      'name' => t('Aircraft Issue'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Issue Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
