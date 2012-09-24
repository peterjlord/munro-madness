<?php
function munros_migrate_flag() {
	munros_clear_flag_table();
	$remote = Database::getConnection($target='default',$key='remote');
  $result = $remote->query('SELECT * FROM {flag_content} n WHERE n.fid = :fid', array(':fid' => 1));
	db_set_active('default');

  $count = 0;
  foreach ($result as $munro_bagged) {
		$fcid = db_insert('flag_content')
      ->fields(array(
        'fid' => $munro_bagged->fid,
        'content_type' => $munro_bagged->content_type,
        'content_id' => $munro_bagged->content_id,
        'uid' => $munro_bagged->uid,
        'sid' => $munro_bagged->sid,
        'timestamp' => $munro_bagged->timestamp,
      ))
      ->execute();
			$count++;

  }
	drupal_set_message("Inserted $count Munro Baggs");
	$remote = Database::getConnection($target='default',$key='remote');
  $result = $remote->query('SELECT * FROM {flag_counts} n WHERE n.fid = :fid', array(':fid' => 1));
  $count = 0;
	db_set_active('default');
  foreach ($result as $munro_bagged) {
		$fcid = db_insert('flag_counts')
      ->fields(array(
        'fid' => $munro_bagged->fid,
        'content_type' => $munro_bagged->content_type,
        'content_id' => $munro_bagged->content_id,
				'count' => $munro_bagged->count,
      ))
      ->execute();
			$count++;
	}
	drupal_set_message("Inserted $count Munro Counts");
	return "<h2>Finished</h2>";
}
function munros_clear_flag_table() {
	db_query("TRUNCATE TABLE {flag_content}");
	db_query("TRUNCATE TABLE {flag_counts}");
}
