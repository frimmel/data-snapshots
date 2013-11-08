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
    'data_snapshot_data_source_dev' => array(
      'name' => t('Data Snapshot Data Source Dev'),
      'base' => 'node_content',
      'description' => t('Dev content type for Data Snapshot Data Sources'),
      'has_title' => '1',
      'title_label' => t('Public Name for Dataset'),
      'help' => '',
    ),
    'data_snapshot_dev' => array(
      'name' => t('Data Snapshot Dev'),
      'base' => 'node_content',
      'description' => t('A development version of the data snapshot content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
