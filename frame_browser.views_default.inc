<?php
/**
 * @file
 * frame_browser.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function frame_browser_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'models';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Models';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Models';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_model_image' => 'field_model_image',
    'title' => 'title',
    'field_model_manufacturer' => 'field_model_manufacturer',
    'field_model_year' => 'field_model_year',
    'field_model_frame_tubing' => 'field_model_frame_tubing',
    'field_model_fork_tubing' => 'field_model_fork_tubing',
    'field_model_fork_type' => 'field_model_fork_type',
    'field_model_brake_type' => 'field_model_brake_type',
    'field_model_dropout_eyelets' => 'field_model_dropout_eyelets',
    'field_model_fork_eyelets' => 'field_model_fork_eyelets',
    'field_model_bottle_cages' => 'field_model_bottle_cages',
    'field_model_front_rack' => 'field_model_front_rack',
    'field_model_rear_rack' => 'field_model_rear_rack',
    'field_model_colors' => 'field_model_colors',
    'field_model_sizes' => 'field_model_sizes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_model_manufacturer';
  $handler->display->display_options['style_options']['info'] = array(
    'field_model_image' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_manufacturer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_frame_tubing' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_fork_tubing' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_fork_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_brake_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_dropout_eyelets' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_fork_eyelets' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_bottle_cages' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_front_rack' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_rear_rack' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_model_colors' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_model_sizes' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_model_image']['id'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['table'] = 'field_data_field_model_image';
  $handler->display->display_options['fields']['field_model_image']['field'] = 'field_model_image';
  $handler->display->display_options['fields']['field_model_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_model_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_model_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_model_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_model_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_model_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_model_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_model_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_model_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_model_image']['settings'] = array(
    'image_style' => 'model_list_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_model_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_model_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_model_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_model_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_model_image']['field_api_classes'] = 0;
  /* Field: Content: Manufacturer */
  $handler->display->display_options['fields']['field_model_manufacturer']['id'] = 'field_model_manufacturer';
  $handler->display->display_options['fields']['field_model_manufacturer']['table'] = 'field_data_field_model_manufacturer';
  $handler->display->display_options['fields']['field_model_manufacturer']['field'] = 'field_model_manufacturer';
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_model_manufacturer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_model_manufacturer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_model_manufacturer']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_model_manufacturer']['field_api_classes'] = 0;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_model_year']['id'] = 'field_model_year';
  $handler->display->display_options['fields']['field_model_year']['table'] = 'field_data_field_model_year';
  $handler->display->display_options['fields']['field_model_year']['field'] = 'field_model_year';
  $handler->display->display_options['fields']['field_model_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_model_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_model_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_model_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_model_year']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_model_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_model_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_model_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_model_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_model_year']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Model Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Frame Tubing */
  $handler->display->display_options['fields']['field_model_frame_tubing']['id'] = 'field_model_frame_tubing';
  $handler->display->display_options['fields']['field_model_frame_tubing']['table'] = 'field_data_field_model_frame_tubing';
  $handler->display->display_options['fields']['field_model_frame_tubing']['field'] = 'field_model_frame_tubing';
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_model_frame_tubing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_model_frame_tubing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_model_frame_tubing']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_model_frame_tubing']['field_api_classes'] = 0;
  /* Field: Content: Fork Tubing */
  $handler->display->display_options['fields']['field_model_fork_tubing']['id'] = 'field_model_fork_tubing';
  $handler->display->display_options['fields']['field_model_fork_tubing']['table'] = 'field_data_field_model_fork_tubing';
  $handler->display->display_options['fields']['field_model_fork_tubing']['field'] = 'field_model_fork_tubing';
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_model_fork_tubing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_model_fork_tubing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_model_fork_tubing']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_model_fork_tubing']['field_api_classes'] = 0;
  /* Field: Content: Fork Type */
  $handler->display->display_options['fields']['field_model_fork_type']['id'] = 'field_model_fork_type';
  $handler->display->display_options['fields']['field_model_fork_type']['table'] = 'field_data_field_model_fork_type';
  $handler->display->display_options['fields']['field_model_fork_type']['field'] = 'field_model_fork_type';
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_model_fork_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_model_fork_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_model_fork_type']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_model_fork_type']['field_api_classes'] = 0;
  /* Field: Content: Brake Type */
  $handler->display->display_options['fields']['field_model_brake_type']['id'] = 'field_model_brake_type';
  $handler->display->display_options['fields']['field_model_brake_type']['table'] = 'field_data_field_model_brake_type';
  $handler->display->display_options['fields']['field_model_brake_type']['field'] = 'field_model_brake_type';
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_model_brake_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_model_brake_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_model_brake_type']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_model_brake_type']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'model' => 'model',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'models';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Models';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['models'] = array(
    t('Master'),
    t('Models'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Image'),
    t('Manufacturer'),
    t('Year'),
    t('Model Name'),
    t('Frame Tubing'),
    t('Fork Tubing'),
    t('Fork Type'),
    t('Brake Type'),
    t('Page'),
  );
  $export['models'] = $view;

  return $export;
}
