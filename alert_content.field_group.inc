<?php
/**
 * @file
 * alert_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function alert_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alert_display|node|alert|form';
  $field_group->group_name = 'group_alert_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alert Display',
    'weight' => '1',
    'children' => array(
      0 => 'field_alert_level',
      1 => 'field_alert_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Alert Display',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_alert_display|node|alert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|alert|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '2',
    'children' => array(
      0 => 'field_file_asset',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attachments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_attachments|node|alert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|alert|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_content|node|alert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|alert|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '100',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_keywords',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta|node|alert|form'] = $field_group;

  return $export;
}
