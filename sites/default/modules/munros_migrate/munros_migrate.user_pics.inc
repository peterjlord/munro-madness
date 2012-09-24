<?php
function munros_migrate_profile_pictures() {
	$remote = Database::getConnection($target='default',$key='remote');
  $result = $remote->query('SELECT * FROM {users} u WHERE uid!=0');
	db_set_active('default');
	$path = '/' . variable_get('file_public_path', conf_path() . '/files/');
	$path = DRUPAL_ROOT . '/' . variable_get('file_public_path', conf_path() . '/files');
  $count = 0;
	$return = '';
  foreach ($result as $user) {
		if($user->picture && $user->uid!=1) {
			$pic = str_replace('files', '', $user->picture);
			$pic = ($path . $pic);
			$size = filesize($pic);
			$mime = mime_content_type($pic);
			$filename = (basename($pic));
			$uri = "public://pics/". $filename;
			/*
			$fid = db_insert('file_managed')
      ->fields(array(
        'uid' => $user->uid,
        'filename' => $filename,
        'uri' => $uri,
        'filemime' => $mime,
        'filesize' => $size,
				'status' => 1,
        'timestamp' => 0,
      ))
      ->execute();

			db_insert('file_usage')
			->fields( array(
				'fid' => $fid,
				'module' => 'user',
				'type' => 'user',
				'id' => $user->uid,
				'count' => 1,
			));
			db_update('users')
			->fields( array(
				'picture' => $fid
			))
			->condition('uid', $user->uid)
			->execute();
			//$return.="<img src=\"$pic\" />";
			*/
		}
	}
	return $return;
}
