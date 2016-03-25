<?php

define('DIVERGENTE_THEME_DEFAULT', 'neutral');
define('DIVERGENTE_THEME_ADMINISTRATIVE', 'adminimal');

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function divergente_form_install_configure_form_alter(&$form, $form_state) {

}

/**
 * Implements hook_libraries_info().
 */
function divergente_libraries_info() {
  $libraries['OpenGraph'] = array(
    'name' => 'OpenGraph',
    'vendor url' => 'https://github.com/scottmac/opengraph',
    'download url' => 'https://github.com/scottmac/opengraph',
    'version callback' => 'divergente_opengraph_library_version_callback',
    'files' => array('php' => array('OpenGraph.php')),
  );

  return $libraries;
}

/**
 * Version callback for the opengraph library.
 */
function divergente_opengraph_library_version_callback() {
  return TRUE;
}
