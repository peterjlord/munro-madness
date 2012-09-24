<?php
/**
 * @file
 * munros_features.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function munros_features_field_default_fields() {
  $fields = array();

  // Exported field: 'node-embedded_video-field_area'
  $fields['node-embedded_video-field_area'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_area',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'profile2_private' => FALSE,
        'referenceable_types' => array(
          'accommodation' => 0,
          'amazon' => 0,
          'area' => 0,
          'blog' => 0,
          'book' => 0,
          'campsite' => 0,
          'embedded_video' => 0,
          'faq' => 0,
          'feed' => 0,
          'feed_fast' => 0,
          'feed_item' => 0,
          'hostel' => 0,
          'image' => 0,
          'image_feed' => 0,
          'laterooms' => 0,
          'link' => 0,
          'munro' => 0,
          'page' => 0,
          'profile' => 0,
          'region' => 0,
          'route' => 0,
          'video_feed' => 0,
          'weather' => 0,
          'webform' => 0,
        ),
        'semantic_cck_field_settings' => array(
          'enabled' => 0,
          'field_class' => '',
          'field_element' => 'div',
          'first_class' => 'first',
          'label_class_above' => '',
          'label_class_inline' => '',
          'label_element_above' => 'h3',
          'label_element_inline' => 'span',
          'label_suffix_above' => '',
          'label_suffix_inline' => ':',
          'last_class' => 'last',
          'last_every_nth' => '0',
          'multiple_item_class' => '',
          'multiple_item_element' => 'div',
          'multiple_items_class' => '',
          'multiple_items_element' => 'div',
          'single_item_class' => '',
          'single_item_element' => 'div',
          'striping_classes' => 'odd even',
          'use_singlevalue_settings' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'references_for_selects',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
      'type_name' => 'video_feed',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => array(
        0 => array(
          'nid' => '0',
          'error_field' => 'field_area][nids',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '-4',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '-4',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '-4',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '-4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_area',
      'label' => 'Area',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '-4',
      'widget' => array(
        'active' => '0',
        'module' => 'options',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'size' => 60,
        ),
        'type' => 'options_select',
        'weight' => '-4',
      ),
      'widget_type' => 'nodereference_select',
    ),
  );

  // Exported field: 'node-embedded_video-field_description'
  $fields['node-embedded_video-field_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'semantic_cck_field_settings' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'route',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_description][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        'print' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => '-3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_description',
      'label' => 'Description',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '-3',
      'widget' => array(
        'active' => '0',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'rows' => '10',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '-3',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-embedded_video-field_munro'
  $fields['node-embedded_video-field_munro'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_munro',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'accommodation' => FALSE,
          'amazon' => 0,
          'area' => 0,
          'blog' => FALSE,
          'book' => 0,
          'campsite' => 0,
          'embedded_video' => 0,
          'faq' => 0,
          'hostel' => 0,
          'image' => 0,
          'image_feed' => 0,
          'link' => 0,
          'munro' => 0,
          'page' => 0,
          'profile' => 0,
          'region' => 0,
          'route' => 0,
          'video_feed' => 0,
          'village' => 0,
          'weather' => 0,
        ),
        'semantic_cck_field_settings' => '',
        'view' => array(
          'args' => array(
            0 => '',
          ),
          'display_name' => 'default',
          'view_name' => 'munros_nodereference',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
      'type_name' => 'video_feed',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => array(
        0 => array(
          'nid' => NULL,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '1',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_munro',
      'label' => 'Munro(s)',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '1',
      'widget' => array(
        'active' => '1',
        'module' => 'options',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
        ),
        'type' => 'options_select',
        'weight' => '1',
      ),
      'widget_type' => 'multiselect_select',
    ),
  );

  // Exported field: 'node-embedded_video-field_munro_range'
  $fields['node-embedded_video-field_munro_range'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_munro_range',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'profile2_private' => FALSE,
        'referenceable_types' => array(
          'accommodation' => 0,
          'amazon' => 0,
          'area' => 0,
          'blog' => 0,
          'book' => 0,
          'campsite' => 0,
          'embedded_video' => 0,
          'faq' => 0,
          'feed' => 0,
          'feed_fast' => 0,
          'feed_item' => 0,
          'hostel' => 0,
          'image' => 0,
          'image_feed' => 0,
          'laterooms' => 0,
          'link' => 0,
          'munro' => 0,
          'page' => 0,
          'profile' => 0,
          'region' => 'region',
          'route' => 0,
          'video_feed' => 0,
          'weather' => 0,
          'webform' => 0,
        ),
        'semantic_cck_field_settings' => array(
          'enabled' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
      'type_name' => 'video_feed',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => array(
        0 => array(
          'nid' => '0',
          'error_field' => 'field_munro_range][nids',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_munro_range',
      'label' => 'Region',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '0',
      'widget' => array(
        'active' => '0',
        'module' => 'options',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'default_value_php' => NULL,
          'filefield_sources' => array(
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
          ),
          'size' => 60,
        ),
        'type' => 'options_select',
        'weight' => '0',
      ),
      'widget_type' => 'nodereference_select',
    ),
  );

  // Exported field: 'node-embedded_video-field_parent'
  $fields['node-embedded_video-field_parent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_parent',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'computed_field',
      'settings' => array(
        'code' => '$entity_field[0][\'value\'] = $entity_field[0][\'value\'];',
        'data_default' => '',
        'data_length' => '',
        'data_not_NULL' => 0,
        'data_sortable' => 1,
        'data_type' => 'varchar',
        'database' => array(
          'data_default' => NULL,
          'data_index' => FALSE,
          'data_length' => 32,
          'data_not_NULL' => FALSE,
          'data_precision' => 10,
          'data_scale' => 2,
          'data_size' => 'normal',
          'data_type' => 'varchar',
        ),
        'display_format' => '',
        'store' => 0,
      ),
      'translatable' => '0',
      'type' => 'computed',
      'type_name' => 'embedded_video',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'computed_field_plain',
          'weight' => '26',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_parent',
      'label' => 'Parent',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '26',
      'widget' => array(
        'active' => '0',
        'module' => 'computed_field',
        'settings' => array(
          'default_value' => NULL,
          'default_value_php' => NULL,
        ),
        'type' => 'computed',
        'weight' => '26',
      ),
      'widget_type' => 'computed',
    ),
  );

  // Exported field: 'node-embedded_video-field_video'
  $fields['node-embedded_video-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'video_embed_field',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'video_embed_field',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'video_embed_field',
          'settings' => array(
            'description' => 1,
            'field_delimiter' => '',
            'video_style' => 'normal',
          ),
          'type' => 'video_embed_field',
          'weight' => 11,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video',
      'label' => 'Video',
      'required' => 1,
      'settings' => array(
        'description_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'video_embed_field',
        'settings' => array(),
        'type' => 'video_embed_field_video',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-embedded_video-taxonomy_vocabulary_10'
  $fields['node-embedded_video-taxonomy_vocabulary_10'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_10',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'vocabulary_10',
            'parent' => 0,
          ),
        ),
        'required' => TRUE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_10',
      'label' => 'Video Type',
      'required' => '1',
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-embedded_video-taxonomy_vocabulary_11'
  $fields['node-embedded_video-taxonomy_vocabulary_11'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_11',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'vocabulary_11',
            'parent' => 0,
          ),
        ),
        'required' => TRUE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'embedded_video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_11',
      'label' => 'Weather ',
      'required' => '1',
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_about_me'
  $fields['profile2-main-field_about_me'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_about_me',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'profile2_private' => 0,
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_about_me',
      'label' => 'About Me',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_birthdate'
  $fields['profile2-main-field_birthdate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_birthdate',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => 0,
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'date',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'field_delimiter' => '',
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_birthdate',
      'label' => 'Birthday',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'd/m/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '1900:+3',
        ),
        'type' => 'date_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_children'
  $fields['profile2-main-field_children'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_children',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No Children',
          1 => 'Have Child(ren)',
          2 => 'My Pets Are My Kids',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'list_default',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_children',
      'label' => 'Children',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_education'
  $fields['profile2-main-field_education'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_education',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'In High School',
          1 => 'Some High School',
          2 => 'Completed High School',
          3 => 'In College',
          4 => 'Some College',
          5 => 'Completed College',
          6 => 'In Post Graduate',
          7 => 'Some Post Graduate',
          8 => 'Completed Post Graduate',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'list_default',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_education',
      'label' => 'Education',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_firstname'
  $fields['profile2-main-field_firstname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_firstname',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_firstname',
      'label' => 'Forename',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_gender'
  $fields['profile2-main-field_gender'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gender',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Male',
          1 => 'Female',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'list_default',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_gender',
      'label' => 'Gender',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_initial'
  $fields['profile2-main-field_initial'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_initial',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_initial',
      'label' => 'Initial',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_interests'
  $fields['profile2-main-field_interests'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_interests',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_interests',
      'label' => 'General',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_occupation'
  $fields['profile2-main-field_occupation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_occupation',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '100',
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_occupation',
      'label' => 'Occupation',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_orientation'
  $fields['profile2-main-field_orientation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_orientation',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Straight',
          1 => 'Gay',
          2 => 'Bi',
          3 => 'Undecided',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'list_default',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_orientation',
      'label' => 'Orientation',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_status'
  $fields['profile2-main-field_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Single',
          1 => 'Married',
          2 => 'Divorced',
          3 => 'In a Relationship',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'list_default',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_status',
      'label' => 'Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_surname'
  $fields['profile2-main-field_surname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_surname',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'profile2_private' => 0,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'profile',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'field_delimiter' => '',
          ),
          'type' => 'text_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_surname',
      'label' => 'Surname',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');
  t('Area');
  t('Birthday');
  t('Children');
  t('Description');
  t('Education');
  t('Forename');
  t('Gender');
  t('General');
  t('Initial');
  t('Munro(s)');
  t('Occupation');
  t('Orientation');
  t('Parent');
  t('Region');
  t('Status');
  t('Surname');
  t('Video');
  t('Video Type');
  t('Weather ');

  return $fields;
}
