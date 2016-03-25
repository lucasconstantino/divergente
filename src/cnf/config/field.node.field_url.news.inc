<?php
/**
 * @file
 * field.node.field_url.news.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'active' => '1',
    'cardinality' => '1',
    'columns' => array(
      'attributes' => array(
        'not null' => FALSE,
        'size' => 'medium',
        'type' => 'text',
      ),
      'title' => array(
        'length' => 255,
        'not null' => FALSE,
        'sortable' => TRUE,
        'type' => 'varchar',
      ),
      'url' => array(
        'length' => 2048,
        'not null' => FALSE,
        'sortable' => TRUE,
        'type' => 'varchar',
      ),
    ),
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_url',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => '0',
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'storage' => array(
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_url' => array(
              'attributes' => 'field_url_attributes',
              'title' => 'field_url_title',
              'url' => 'field_url_url',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_url' => array(
              'attributes' => 'field_url_attributes',
              'title' => 'field_url_title',
              'url' => 'field_url_url',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => '0',
    'type' => 'link_field',
  ),
  'field_instance' => array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Endereço da notícia.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => '128',
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => '1',
    ),
  ),
);

$dependencies = array(
  'content_type.news' => 'content_type.news',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'link',
);
