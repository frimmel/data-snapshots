Feature Architecture:

    data_snapshots.module
        include_once 'data_snapshots.features.inc';
        function data_snapshots_ctools_plugin_api() {}

    data_snapshots.features.inc
        function data_snapshots_node_info() {}                              Implements hook_node_info()

    data_snapshots.features.field.inc
        function data_snapshots_field_default_fields() {}                   Implements hook_field_default_fields()
            Returns a big assoc array, each entry of which
            contains other assoc arrays named
               field_config: general info about the field
               field_instance: info about the instance

    data_snapshots.features.taxonomy.inc
        function data_snapshots_taxonomy_default_vocabularies() {}          Implements hook_taxonomy_default_vocabularies()

    data_snapshots.field_group.inc
        function data_snapshots_field_group_info() {}                       Implements hook_field_group_info()

Un-Feature Architecture:

    data_snapshots.module
        data_snapshots_node_info() (more or less from above)

        implement hook_node_type_insert()  
            which should loop over the fields defined in the array returned by 
            data_snapshots_field_default_fields() above, calling
                field_create_field()    for each 'field_config', and
                field_create_instance() for each 'field_instance'
                
                [ see sites/all/modules/examples/node_example/node_example.module for example ]
