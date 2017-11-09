<?php

/**
 * @file
 * Admin page callbacks and forms for recently viewed products.
 */

/**
 * Build the admin settings form.
 */
function uc_recently_viewed_products_admin_settings_form($form, &$form_state) {
  $form = array();

  $form['uc_recently_viewed_products_expire_interval'] = array(
    '#type' => 'textfield',
    '#attributes' => array(
        ' type' => 'number',
    ),
    '#title' => t('Products Expire time'),
    '#default_value' => variable_get('uc_recently_viewed_products_expire_interval', 86400),
    '#description' => t("Specify the time (in sec) for which viewed products should remain in database."),
  );

  $form['uc_recently_viewed_products_limit'] = array(
    '#type' => 'textfield',
    '#attributes' => array(
        ' type' => 'number',
    ),
    '#title' => t('Number of products to show'),
    '#default_value' => variable_get('uc_recently_viewed_products_limit', 4),
    '#description' => t("Specify the number of products to show."),
  );

  return system_settings_form($form);
}