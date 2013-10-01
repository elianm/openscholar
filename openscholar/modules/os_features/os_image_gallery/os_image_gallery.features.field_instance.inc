<?php
/**
 * @file
 * os_image_gallery.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os_image_gallery_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-media_gallery-media_gallery_allow_download'
  $field_instances['node-media_gallery-media_gallery_allow_download'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Display a "download original file" link',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_allow_download',
    'label' => 'Allow downloading of the original file',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_block_columns'
  $field_instances['node-media_gallery-media_gallery_block_columns'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_block_columns',
    'label' => 'Number of columns',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_block_rows'
  $field_instances['node-media_gallery-media_gallery_block_rows'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_block_rows',
    'label' => 'Number of rows',
    'required' => TRUE,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_columns'
  $field_instances['node-media_gallery-media_gallery_columns'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_columns',
    'label' => 'Number of columns',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_description'
  $field_instances['node-media_gallery-media_gallery_description'] = array(
    'bundle' => 'media_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_description',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_expose_block'
  $field_instances['node-media_gallery-media_gallery_expose_block'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_expose_block',
    'label' => 'Create a block of most recently added media',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_file'
  $field_instances['node-media_gallery-media_gallery_file'] = array(
    'bundle' => 'media_gallery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'media_gallery',
        'settings' => array(
          'file_view_mode' => 'media_gallery_thumbnail',
        ),
        'type' => 'media_gallery',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'media_gallery',
        'settings' => array(
          'file_view_mode' => 'media_gallery_thumbnail',
        ),
        'type' => 'media_gallery',
        'weight' => 2,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'module' => 'media_gallery',
        'settings' => array(
          'file_view_mode' => 'media_gallery_block_thumbnail',
        ),
        'type' => 'media_gallery',
        'weight' => 2,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'media_gallery',
        'settings' => array(
          'file_view_mode' => 'media_gallery_collection_thumbnail',
        ),
        'type' => 'media_gallery',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_file',
    'label' => 'Gallery media',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '6 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 'document',
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_format'
  $field_instances['node-media_gallery-media_gallery_format'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 'lightbox',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_format',
    'label' => 'Gallery format',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_image_info_where'
  $field_instances['node-media_gallery-media_gallery_image_info_where'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 'hover',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_image_info_where',
    'label' => 'Media information',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_lightbox_extras'
  $field_instances['node-media_gallery-media_gallery_lightbox_extras'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Show title and description',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_lightbox_extras',
    'label' => 'Lightbox title and description',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-media_gallery-media_gallery_rows'
  $field_instances['node-media_gallery-media_gallery_rows'] = array(
    'bundle' => 'media_gallery',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'media_gallery_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'media_gallery_rows',
    'label' => 'Number of rows',
    'required' => TRUE,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-media_gallery-og_group_ref'
  $field_instances['node-media_gallery-og_group_ref'] = array(
    'bundle' => 'media_gallery',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_gallery_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'hide',
          'action_on_edit' => 1,
          'fallback' => 'none',
          'og_context' => 1,
          'skip_perm' => 'administer group',
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-media_gallery-og_vocabulary'
  $field_instances['node-media_gallery-og_vocabulary'] = array(
    'bundle' => 'media_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'og_vocab',
        'settings' => array(
          'concatenate' => TRUE,
        ),
        'type' => 'og_vocab',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_gallery_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'sidebar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_vocabulary',
    'label' => 'OG vocabulary',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'og_vocab',
      'settings' => array(),
      'type' => 'og_vocab_complex',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Allow downloading of the original file');
  t('Create a block of most recently added media');
  t('Description');
  t('Display a "download original file" link');
  t('Gallery format');
  t('Gallery media');
  t('Groups audience');
  t('Lightbox title and description');
  t('Media information');
  t('Number of columns');
  t('Number of rows');
  t('OG vocabulary');
  t('Show title and description');

  return $field_instances;
}
