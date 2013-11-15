<?php

$dataset_nid = db_select('field_data_field_dssds_machine_name', 'f')
    ->condition('field_dssds_machine_name_value', "usdm")
    ->fields('f', array('entity_id'))
    ->execute()
    ->FetchField();

printf("got dataset_nid=%s\n", $dataset_nid);


$dataset_node = node_load($dataset_nid);

print_r($dataset_node);

