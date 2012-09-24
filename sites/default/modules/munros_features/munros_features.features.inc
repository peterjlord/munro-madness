<?php
/**
 * @file
 * munros_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function munros_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function munros_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function munros_features_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bagged Munros".
  $flags['baggedmunros'] = array(
    'content_type' => 'node',
    'title' => 'Bagged Munros',
    'global' => '0',
    'types' => array(
      0 => 'munro',
    ),
    'flag_short' => 'Add [title] to your bagged list',
    'flag_long' => 'Add [title] to your bagged list ',
    'flag_message' => '[title] has been bagged',
    'unflag_short' => 'Remove [title] from bagged list',
    'unflag_long' => 'Remove [title] from your bagged list',
    'unflag_message' => '[title] has been removed from your bagged list',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'munros_features',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Delete".
  $flags['delete'] = array(
    'content_type' => 'node',
    'title' => 'Delete',
    'global' => '0',
    'types' => array(
      0 => 'feed_item',
      1 => 'image',
    ),
    'flag_short' => 'X',
    'flag_long' => 'Delete From Site',
    'flag_message' => 'Has Been Deleted',
    'unflag_short' => 'Add',
    'unflag_long' => 'Does Nothing',
    'unflag_message' => 'Nothing',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => '1',
    'module' => 'munros_features',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Favorite".
  $flags['favorite'] = array(
    'content_type' => 'node',
    'title' => 'Favorite',
    'global' => '0',
    'types' => array(
      0 => 'video_external',
      1 => 'area',
      2 => 'route',
      3 => 'region',
      4 => 'munro',
      5 => 'image',
      6 => 'hostel',
      7 => 'campsite',
    ),
    'flag_short' => 'Add Favorite',
    'flag_long' => 'Click to Add [title] to your favorites',
    'flag_message' => '[title] has been added to your favorites',
    'unflag_short' => 'Remove Favorite',
    'unflag_long' => 'Click to remove [title] from your favorites',
    'unflag_message' => '[title] has been removed from your favorites',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'flag_confirmation' => '',
    'unflag_confirmation' => '',
    'module' => 'munros_features',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Liked Comment".
  $flags['liked_comment'] = array(
    'content_type' => 'comment',
    'title' => 'Liked Comment',
    'global' => '0',
    'types' => array(
      0 => 'embedded_video',
      1 => 'campsite',
      2 => 'hostel',
      3 => 'image',
      4 => 'munro',
      5 => 'region',
      6 => 'route',
    ),
    'flag_short' => 'liked / usefull',
    'flag_long' => 'Mark this as a usefull or interesting comment',
    'flag_message' => 'Marking [comment-title] by [comment-author-name] as usefull / interesting',
    'unflag_short' => 'unliked / not usefull ',
    'unflag_long' => 'Mark this as an uninteresting not particularly or usefull comment',
    'unflag_message' => 'Marking [comment-title] by [comment-author-name] as a uninteresting not particularly or usefull comment',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'access_author' => '',
    'show_on_comment' => 1,
    'module' => 'munros_features',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Not Relevant".
  $flags['not_relevant'] = array(
    'content_type' => 'node',
    'title' => 'Not Relevant',
    'global' => '0',
    'types' => array(),
    'flag_short' => 'Mark as Unrelevant',
    'flag_long' => 'Mark as Unrelevant',
    'flag_message' => 'Marked as Unrelevant',
    'unflag_short' => 'Relevant',
    'unflag_long' => 'Relevant',
    'unflag_message' => 'Relevant',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'munros_features',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Climbed Route".
  $flags['route'] = array(
    'content_type' => 'node',
    'title' => 'Climbed Route',
    'global' => '0',
    'types' => array(
      0 => 'route',
    ),
    'flag_short' => 'Climbed [title]',
    'flag_long' => 'I\'ve Climbed the route [title]',
    'flag_message' => 'Marked the route [title] as climbed and ticked off the munros',
    'unflag_short' => 'Unclimb [title]',
    'unflag_long' => 'I haven\'t climbed the route [title]',
    'unflag_message' => 'Marked the route [title] as climbed and ticked off the munros',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'munros_features',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implements hook_image_default_styles().
 */
function munros_features_image_default_styles() {
  $styles = array();

  // Exported image style: tiny-30x30
  $styles['tiny-30x30'] = array(
    'name' => 'tiny-30x30',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '30',
          'height' => '30',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function munros_features_node_info() {
  $items = array(
    'embedded_video' => array(
      'name' => t('Embedded Video'),
      'base' => 'node_content',
      'description' => t('External Video Sources from you tube'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function munros_features_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true }
  }');
  return $items;
}
