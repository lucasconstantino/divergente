<?php
/**
 * @file
 * content_type.news.inc
 */

$api = '2.0.0';

$data = (object) array(
  'base' => 'node_content',
  'description' => 'Notícia é um link para uma notícia interna. Todas as informações são carregadas através de metadados.',
  'has_title' => '1',
  'help' => '',
  'name' => 'Notícia',
  'title_label' => 'Título',
  'type' => 'news',
);

$dependencies = array();

$optional = array(
  'field.node.field_description.news' => 'field.node.field_description.news',
  'field.node.field_image.news' => 'field.node.field_image.news',
  'field.node.field_source.news' => 'field.node.field_source.news',
  'field.node.field_url.news' => 'field.node.field_url.news',
  'permission.create_news_content' => 'permission.create_news_content',
  'permission.delete_any_news_content' => 'permission.delete_any_news_content',
  'permission.delete_own_news_content' => 'permission.delete_own_news_content',
  'permission.edit_any_news_content' => 'permission.edit_any_news_content',
  'permission.edit_own_news_content' => 'permission.edit_own_news_content',
);

$modules = array(
  0 => 'node',
);
