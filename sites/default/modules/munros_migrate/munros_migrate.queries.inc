<?php
function munros_migrate_queries($form, &$form_state) {
	 $form['description'] = array(
    '#type' => 'item',
    '#title' => t('A simple form with a submit button'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );
  return $form;
}
function munros_migrate_queries_submit($form, &$form_state) {

	$remote = Database::getConnection($target='default',$key='remote');
	$result = $remote->query('SELECT * FROM {flag_content} n WHERE n.fid = :fid', array(':fid' => 1));
	$count = 0;
	foreach ($result as $record) {
		$count++;
	}

	drupal_set_message("$count");
	db_set_active('default');
}

