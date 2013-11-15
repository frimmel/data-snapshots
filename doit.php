<?php

$dataset_nid = db_select('field_data_field_dsds_mn', 'f')
    ->condition('field_dsds_mn_value', "usdm")
    ->fields('f', array('entity_id'))
    ->execute()
    ->FetchField();

printf("got dataset_nid=%s\n", $dataset_nid);


$dataset_node = node_load($dataset_nid);

print_r($dataset_node);

