<?php
function starksub_preprocess_html(&$vars) {
  drupal_add_css('https://maxcdn.bootstrapcdn.com/bootstrap/3.3.2/css/bootstrap.min.css', array(
    'type' => 'external'
  ));
  
  drupal_add_css('http://fonts.googleapis.com/css?family=Roboto+Condensed:400,300', array(
    'type' => 'external'
  ));
}

function starksub_theme() {
  return array(
    'user_profile_form' => array(
      'arguments' => array(
        'form' => NULL
      ),
      'template' => 'user-profile-form'
    )
  );
  
  $viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1, maximum-scale=1'
    )
  );
  drupal_add_html_head($viewport, 'viewport');
}

/**
 * Preprocess user profile form.
 */
function starksub_preprocess_user_profile_form(&$vars) {
  
  // Uncomment the following line if Devel module is enabled, to view the contents of the form.
  // dsm($vars['form']);
  
  // Change the help text for specific form elements.
  $vars['form']['account']['name']['#description'] = t('Custom description regarding the Username.');
  
  // Adjust the titles of several fieldsets.
  $vars['form']['picture']['#title'] = t('Your user picture / avatar');
  $vars['form']['timezone']['#title'] = t('Time zone');
  unset($vars['form']['timezone']['timezone']['#title']);
  
  // Set several elements that by default have collapsed fieldsets to expanded and non-collapsible.
  $vars['form']['theme_select']['themes']['#collapsible'] = FALSE;
  $vars['form']['picture']['#collapsible'] = FALSE;
  $vars['form']['contact']['#collapsible'] = FALSE;
  $vars['form']['timezone']['#collapsible'] = FALSE;
  
  // Adjust the size of several fields to fit better in 2 columns.
  $vars['form']['account']['name']['#size'] = 25;
  $vars['form']['account']['mail']['#size'] = 25;
  $vars['form']['picture']['picture_upload']['#size'] = 40;
  $vars['form']['signature_settings']['signature']['#cols'] = 50;
  
  // Rename the Save and Delete buttons to be more clear.
  $vars['form']['submit']['#value'] = t('Save profile');
  $vars['form']['delete']['#value'] = t('Delete account');
  
  // Prepare all of the desired form elements as variables, to be used in user-profile-form.tpl.php.
  // Everything before this part is optional.
  $vars['account'] = drupal_render($vars['form']['account']);
  $vars['theme_select'] = drupal_render($vars['form']['theme_select']);
  $vars['picture'] = drupal_render($vars['form']['picture']);
  $vars['signature_settings'] = drupal_render($vars['form']['signature_settings']);
  $vars['contact'] = drupal_render($vars['form']['contact']);
  $vars['timezone'] = drupal_render($vars['form']['timezone']);
  $vars['submit'] = drupal_render($vars['form']['submit']);
  $vars['delete'] = drupal_render($vars['form']['delete']);
}