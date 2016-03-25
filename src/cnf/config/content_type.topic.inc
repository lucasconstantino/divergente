<?php
/**
 * @file
 * content_type.topic.inc
 */

$api = '2.0.0';

$data = (object) array(
  'base' => 'node_content',
  'description' => 'Tópico é o conjunto de notícias.',
  'has_title' => '1',
  'help' => '',
  'name' => 'Tópico',
  'title_label' => 'Título',
  'type' => 'topic',
);

$dependencies = array();

$optional = array(
  'field.node.field_description.topic' => 'field.node.field_description.topic',
  'field.node.field_news.topic' => 'field.node.field_news.topic',
  'permission.create_topic_content' => 'permission.create_topic_content',
  'permission.delete_any_topic_content' => 'permission.delete_any_topic_content',
  'permission.delete_own_topic_content' => 'permission.delete_own_topic_content',
  'permission.edit_any_topic_content' => 'permission.edit_any_topic_content',
  'permission.edit_own_topic_content' => 'permission.edit_own_topic_content',
);

$modules = array(
  0 => 'node',
);
