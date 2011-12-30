<?php
/**
 * @file
 * learn_web.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function learn_web_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hovedmenu',
    'description' => 'Menuen <em>Main</em> bruges på mange sites til at vise sitets overordnede sektioner, typisk i en navigationsbjælke i toppen af siden.',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-danish
  $menus['menu-danish'] = array(
    'menu_name' => 'menu-danish',
    'title' => 'Dansk',
    'description' => 'Den danske udgave af hovedmenuen.',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-english
  $menus['menu-english'] = array(
    'menu_name' => 'menu-english',
    'title' => 'English',
    'description' => 'Den engelske udgave af hovedmenuen.',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-learn-user
  $menus['menu-learn-user'] = array(
    'menu_name' => 'menu-learn-user',
    'title' => 'User',
    'description' => 'Indeholder utility-links som vises til brugere af mobiludgaven af sitet.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: user-menu
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'Menuen <em>Bruger</em> indeholder links relateret til brugerens konto samt linket \'Log ud\'.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Dansk');
  t('Den danske udgave af hovedmenuen.');
  t('Den engelske udgave af hovedmenuen.');
  t('English');
  t('Hovedmenu');
  t('Indeholder utility-links som vises til brugere af mobiludgaven af sitet.');
  t('Menuen <em>Bruger</em> indeholder links relateret til brugerens konto samt linket \'Log ud\'.');
  t('Menuen <em>Main</em> bruges på mange sites til at vise sitets overordnede sektioner, typisk i en navigationsbjælke i toppen af siden.');
  t('User');
  t('User menu');


  return $menus;
}
