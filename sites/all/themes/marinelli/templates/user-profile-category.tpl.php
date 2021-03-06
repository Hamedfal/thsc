<?php

/**
 * @file
 * Default theme implementation to present profile categories (groups of
 * profile items).
 *
 * Categories are defined when configuring user profile fields for the site.
 * It can also be defined by modules. All profile items for a category will be
 * output through the $profile_items variable.
 *
 * @see user-profile-item.tpl.php
 *      where each profile item is rendered. It is implemented as a definition
 *      list by default.
 * @see user-profile.tpl.php
 *      where all items and categories are collected and printed out.
 *
 * Available variables:
 * - $title: Category title for the group of items.
 * - $profile_items: All the items for the group rendered through
 *   user-profile-item.tpl.php.
 * - $attributes: HTML attributes. Usually renders classes.
 *
 * @see template_preprocess_user_profile_category()
 */
?>
<?php if ($title): ?>
  <div class="thsc-block-title">
    <h2 class="thsc-title"><?php print $title; ?></h2>
  </div>
<?php endif; ?>

<div class="thsc-block-content">
  <dl <?php print $attributes; ?>>
    <?php print $profile_items; ?>
  </dl>
</div>