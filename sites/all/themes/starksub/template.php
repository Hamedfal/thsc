<?php 

function starksub_preprocess_html(&$variables) {
  drupal_add_css(
    'https://maxcdn.bootstrapcdn.com/bootstrap/3.3.2/css/bootstrap.min.css',
array('type' => 'external')
  );
}
?>