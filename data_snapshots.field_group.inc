<?php
/**
 * @file
 * data_snapshots.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function data_snapshots_field_group_info() {

  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_climategov_metadata|node|data_snapshot_dev|form';
  $field_group->group_name = 'group_climategov_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dss_dev_tabs';
  $field_group->data = array(
    'label' => 'Climate.gov Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_term_clean',
      1 => 'path',
      2 => 'redirect',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_climategov_metadata|node|data_snapshot_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datasnapshot_edit_info|node|data_snapshot_dev|form';
  $field_group->group_name = 'group_datasnapshot_edit_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dss_dev_tabs';
  $field_group->data = array(
    'label' => 'Editable Information',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_related_nodes',
      2 => 'field_dss_dev_downloads',
      3 => 'field_dss_dev_displayed_image',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_datasnapshot_edit_info|node|data_snapshot_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datasnapshot_image_meta|node|data_snapshot_dev|form';
  $field_group->group_name = 'group_datasnapshot_image_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dss_dev_tabs';
  $field_group->data = array(
    'label' => 'Image Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_datasnapshot_dev_year',
      1 => 'field_datasnapshot_dev_month',
      2 => 'field_datasnapshot_dev_day',
      3 => 'field_dss_dev_date_generated',
      4 => 'field_dss_dev_date_accessed',
      5 => 'field_dss_dev_data_set',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_datasnapshot_image_meta|node|data_snapshot_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dss_dev_tabs|node|data_snapshot_dev|form';
  $field_group->group_name = 'group_dss_dev_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data Snapshot Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_climategov_metadata',
      1 => 'group_datasnapshot_image_meta',
      2 => 'group_datasnapshot_edit_info',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_dss_dev_tabs|node|data_snapshot_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_climate_gov|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_climate_gov';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Climate.gov Metadata',
    'weight' => '7',
    'children' => array(
      0 => 'field_climate_gov_section',
      1 => 'path',
      2 => 'redirect',
      3 => 'workbench_access',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_climate_gov|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_left_sidebar|node|data_snapshot_data_source_dev|full';
  $field_group->group_name = 'group_dssds_dev_left_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_dssds_dev_reviewer_affilia',
      1 => 'field_dssds_dev_official_name',
      2 => 'field_dssds_dev_data_access_url',
      3 => 'field_dssds_dev_catalog_url',
      4 => 'field_dssds_dev_reviewer',
      5 => 'field_dssds_dev_data_provider',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'full-image-sidebar',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_dssds_dev_left_sidebar|node|data_snapshot_data_source_dev|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_metadata|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Data set Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'field_dssds_dev_official_name',
      1 => 'field_dssds_dev_themes',
      2 => 'field_dssds_dev_catalog_url',
      3 => 'field_dssds_dev_image_frequency',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_metadata|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_processing|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_processing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Processing Environment',
    'weight' => '3',
    'children' => array(
      0 => 'field_dssds_dev_processing_steps',
      1 => 'field_dssds_dev_processing_envir',
      2 => 'field_dssds_dev_technical_commen',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_processing|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_provider|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_provider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Data Provider',
    'weight' => '4',
    'children' => array(
      0 => 'field_dssds_dev_data_access_url',
      1 => 'field_dssds_dev_data_format',
      2 => 'field_dssds_dev_data_provider',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_provider|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_tabs|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_dssds_dev_text',
      1 => 'group_dssds_climate_gov',
      2 => 'group_dssds_people',
      3 => 'group_dssds_dev_provider',
      4 => 'group_dssds_dev_metadata',
      5 => 'group_dssds_dev_processing',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_dssds_dev_tabs|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_text|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Editable Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_dssds_dev_colors',
      1 => 'field_dssds_dev_data_matters',
      2 => 'field_dssds_dev_editorial_commen',
      3 => 'field_dssds_dev_references',
      4 => 'field_dssds_dev_framing_question',
      5 => 'field_dssds_dev_english_descript',
      6 => 'field_dssds_dev_plain_english_an',
      7 => 'field_dssds_dev_secondary_questi',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_text|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_people|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'People Involved',
    'weight' => '6',
    'children' => array(
      0 => 'field_dssds_dev_reviewer_affilia',
      1 => 'field_dssds_dev_description_auth',
      2 => 'field_dssds_dev_reviewer',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_people|node|data_snapshot_data_source_dev|form'] = $field_group;

  return $export;
}
