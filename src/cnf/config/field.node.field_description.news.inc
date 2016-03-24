<?php
/**
 * @file
 * field.node.field_description.news.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'active' => '1',
    'cardinality' => '1',
    'columns' => array(
      'format' => array(
        'length' => 255,
        'not null' => FALSE,
        'type' => 'varchar',
      ),
      'value' => array(
        'not null' => FALSE,
        'size' => 'big',
        'type' => 'text',
      ),
    ),
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
    'locked' => '0',
    'module' => 'text',
    'settings' => array(),
    'storage' => array(
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_description' => array(
              'format' => 'field_description_format',
              'value' => 'field_description_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_description' => array(
              'format' => 'field_description_format',
              'value' => 'field_description_value',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => '0',
    'type' => 'text_long',
  ),
  'field_instance' => array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Descrição curta da notícia. Obtido automaticamente via metatag.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Descrição',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => '4',
    ),
  ),
);

$dependencies = array(
  'content_type.news' => 'content_type.news',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
