<?php
/**
 * @file
 * munros_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function munros_features_default_rules_configuration() {
  $items = array();
  $items['rules_change_node_video'] = entity_import('rules_config', '{ "rules_change_node_video" : {
      "LABEL" : "Change Node Video",
      "PLUGIN" : "rule set",
      "TAGS" : [ "migrate" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "embedded_video" : "embedded_video" } }
                }
              }
            ],
            "DO" : [ { "php_eval" : { "code" : "munros_update_video($node);" } } ],
            "LABEL" : "Node Video"
          }
        }
      ]
    }
  }');
  $items['rules_change_profile_nodes_to_profile_entities'] = entity_import('rules_config', '{ "rules_change_profile_nodes_to_profile_entities" : {
      "LABEL" : "Change Profile Nodes To Profile Entities",
      "PLUGIN" : "rule set",
      "TAGS" : [ "profile" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "profile" : "profile" } } } }
            ],
            "DO" : [
              { "php_eval" : { "code" : "munros_update_node_profile2_entity($node);" } }
            ],
            "LABEL" : "Change Node Profiles to Profile Entities"
          }
        }
      ]
    }
  }');
  $items['rules_change_user_profile_pic'] = entity_import('rules_config', '{ "rules_change_user_profile_pic" : {
      "LABEL" : "Change User Profile Pic",
      "PLUGIN" : "rule set",
      "TAGS" : [ "migrate" ],
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [ { "entity_is_of_type" : { "entity" : [ "user" ], "type" : "user" } } ],
            "DO" : [
              { "php_eval" : { "code" : " munros_update_profile_picture($user) ;" } }
            ],
            "LABEL" : "Change User Profile Image"
          }
        }
      ]
    }
  }');
  $items['rules_update_munros_references'] = entity_import('rules_config', '{ "rules_update_munros_references" : {
      "LABEL" : "Update Munros References",
      "PLUGIN" : "rule set",
      "TAGS" : [ "migrate" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "munro" : "munro" } } } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-arearef" ], "value" : [ "node:field-area" ] } },
              { "data_set" : {
                  "data" : [ "node:field-regionref" ],
                  "value" : [ "node:field-munro-range" ]
                }
              }
            ],
            "LABEL" : "Update Munro Area Reference"
          }
        }
      ]
    }
  }');
  return $items;
}
