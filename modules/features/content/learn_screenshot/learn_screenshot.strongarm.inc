<?php
/**
 * @file
 * learn_screenshot.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function learn_screenshot_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_learn_screenshot';
  $strongarm->value = 0;
  $export['comment_anonymous_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_learn_screenshot';
  $strongarm->value = 1;
  $export['comment_default_mode_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_learn_screenshot';
  $strongarm->value = '50';
  $export['comment_default_per_page_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_learn_screenshot';
  $strongarm->value = 1;
  $export['comment_form_location_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_learn_screenshot';
  $strongarm->value = '1';
  $export['comment_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_learn_screenshot';
  $strongarm->value = '1';
  $export['comment_preview_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_learn_screenshot';
  $strongarm->value = 1;
  $export['comment_subject_field_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_learn_screenshot';
  $strongarm->value = 1;
  $export['i18n_node_extended_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_learn_screenshot';
  $strongarm->value = array();
  $export['i18n_node_options_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_learn_screenshot';
  $strongarm->value = '0';
  $export['language_content_type_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_learn_screenshot';
  $strongarm->value = array();
  $export['menu_options_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_learn_screenshot';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_learn_screenshot';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_learn_screenshot';
  $strongarm->value = '1';
  $export['node_preview_learn_screenshot'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_learn_screenshot';
  $strongarm->value = 1;
  $export['node_submitted_learn_screenshot'] = $strongarm;

  return $export;
}
