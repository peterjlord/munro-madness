<?php
function munros_migrate_dashboard() {
	drupal_set_title(t('Migrate you Stuff'));
  return drupal_get_form('munros_migrate_batches');
}
function munros_migrate_batches($form, &$form_state) {
	$form['description'] = array(
    '#type' => 'markup',
    '#markup' => t('Choose one of the following batches to get data into new site'),
  );
  $form['batch'] = array(
    '#type' => 'select',
    '#title' => 'Choose batch',
    '#options' => array(
      'sync_flags' => t('Synchronize the Flag Munros'),
      'sync_user' => t('Synchronize th Users'),
    ),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Go',
  );
  return $form;
}
function munros_migrate_batches_submit($form, &$form_state) {
  $function = 'munros_migrate_' . $form_state['values']['batch'];

  $_SESSION['http_request_count'] = 0; // reset counter for debug information.

  // Execute the function named batch_example_1 or batch_example_2.
  $batch = $function();
  batch_set($batch);
}
function munros_migrate_sync_flags() {
	$num_operations = 20;
  // Give helpful information about how many nodes are being operated on.
	$remote = Database::getConnection($target='default',$key='remote');
	$result = $remote->query('SELECT * FROM {flag_content} n WHERE n.fid = :fid', array(':fid' => 1));
  $node_count = 0;
  foreach ($result as $record) {
    $node_count++;
  }
  drupal_set_message(t('@node_count each of the @num operations will require @count HTTP requests.', array('@node_count' => $node_count, '@num' => $num_operations, '@count' => ceil($node_count / 50))));
	db_set_active('default');


}
function _munros_migrate_update_http_requests() {
  $_SESSION['http_request_count']++;
}

function _munros_migrate_get_http_requests() {
  return !empty($_SESSION['http_request_count']) ? $_SESSION['http_request_count'] : 0;
}


