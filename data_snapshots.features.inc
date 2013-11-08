<?php
/**
 * @file
 * data_snapshots.features.inc
 */

/**
 * Implements hook_node_info().
 */
function data_snapshots_node_info() {
  $items = array(
    'data_snapshot_data_source' => array(
      'name' => t('Data Snapshot Data Source'),
      'base' => 'node_content',
      'description' => t('Content type for Data Snapshot Data Sources'),
      'has_title' => '1',
      'title_label' => t('Public Name for Dataset'),
      'help' => '',
    ),
    'data_snapshot' => array(
      'name' => t('Data Snapshot'),
      'base' => 'node_content',
      'description' => t('Content type for Data Snapshots'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
