<?php
/**
 * @file
 * field.node.field_topic.news.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'active' => '1',
    'cardinality' => '-1',
    'columns' => array(
      'tid' => array(
        'not null' => FALSE,
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_topic',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => '0',
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'parent' => '0',
          'vocabulary' => 'topics',
        ),
      ),
    ),
    'storage' => array(
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_topic' => array(
              'tid' => 'field_topic_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_topic' => array(
              'tid' => 'field_topic_tid',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => '0',
    'type' => 'taxonomy_term_reference',
  ),
  'field_instance' => array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Tópicos a que essa notícia pertence.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topic',
    'label' => 'Topic',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => '6',
    ),
  ),
);

$dependencies = array(
  'content_type.news' => 'content_type.news',
  'vocabulary.topics' => 'vocabulary.topics',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
);
