<?php
/**
 * Contains the theme's node related hook implementations.
 */

/**
 * Implements hook_preprocess_node().
 */
function neutral_preprocess_node(&$variables) {
  $node = $variables['node'];
  $variables['attributes_array']['id'] = drupal_html_id('node-' . $node->nid);
  $variables['attributes_array']['class'] = $variables['classes_array'];
  $variables['content_attributes_array']['class'][] = 'content';
}
