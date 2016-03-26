<?php
/**
 * Contains the theme's node related hook implementations.
 */

/**
 * Implements hook_preprocess_node().
 */
function neutral_preprocess_node(&$variables) {
  $node = $variables['node'];

  // Make attributes more manageable.
  $variables['attributes_array']['id'] = drupal_html_id('node-' . $node->nid);
  $variables['attributes_array']['class'] = $variables['classes_array'];
  $variables['content_attributes_array']['class'][] = 'content';

  // Add generic classes.
  $variables['attributes_array']['class'][] = drupal_html_class('view-mode-' . $variables['view_mode']);
}
