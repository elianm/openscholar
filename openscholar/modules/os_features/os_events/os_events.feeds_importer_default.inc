<?php
/**
 * @file
 * os_events.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function os_events_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'os_ical';
  $feeds_importer->config = array(
    'name' => 'OS iCal',
    'description' => 'Importing events from CSV.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml ics',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateIcalIcalcreatorParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'OsImporterNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'summary',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'dtstart',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'dtend',
            'target' => 'field_date:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Files',
            'target' => 'file',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Terms',
            'target' => 'og_vocab',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'file_field' => 'field_upload',
        'content_type' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['os_ical'] = $feeds_importer;

  return $export;
}
