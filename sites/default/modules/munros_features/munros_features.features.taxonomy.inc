<?php
/**
 * @file
 * munros_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function munros_features_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_10' => array(
      'name' => 'Video Type',
      'machine_name' => 'vocabulary_10',
      'description' => 'Type of video',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_11' => array(
      'name' => 'Weather ',
      'machine_name' => 'vocabulary_11',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_12' => array(
      'name' => 'Gaelic',
      'machine_name' => 'vocabulary_12',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'munros',
      'weight' => '0',
    ),
    'vocabulary_13' => array(
      'name' => 'Image Tag',
      'machine_name' => 'vocabulary_13',
      'description' => 'A Tag to describe the type of picture ie \'summit\', \'corrie\', \'pinnacle\'. ',
      'hierarchy' => '0',
      'module' => 'munros',
      'weight' => '0',
    ),
    'vocabulary_15' => array(
      'name' => 'Geographical',
      'machine_name' => 'vocabulary_15',
      'description' => 'Geographical Terms',
      'hierarchy' => '0',
      'module' => '',
      'weight' => '0',
    ),
    'vocabulary_17' => array(
      'name' => 'Directory',
      'machine_name' => 'vocabulary_17',
      'description' => 'Directory of Links',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_21' => array(
      'name' => 'Scottish County',
      'machine_name' => 'vocabulary_21',
      'description' => 'Scottish County',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_23' => array(
      'name' => 'Facilities',
      'machine_name' => 'vocabulary_23',
      'description' => 'The Facilities your accommodation has',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_4' => array(
      'name' => 'Mountaineering Terms',
      'machine_name' => 'vocabulary_4',
      'description' => 'Glossary of Terms',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_7' => array(
      'name' => 'FAQ Categories',
      'machine_name' => 'vocabulary_7',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
