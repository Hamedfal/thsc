<?php

/**
 *
 * @author hamed
 *
 *         @file
 *         ThscGroupController class for thsc_group entity
 *
 */
class ThscGroupController extends DrupalDefaultEntityController {

  public function save($group) {
    module_invoke_all('entity_presave', $group, 'thsc_group');
    $new = empty($group->group_id);
    $primary_keys = $new ? array() : 'group_id';
    drupal_write_record('thsc_group', $group, $primary_keys);
    $invocation = 'entity_insert';
    if ($new) {
      field_attach_insert('thsc_group', $group);
    }
    else {
      field_attach_update('thsc_group', $group);
      $invocation = 'entity_update';
    }
    module_invoke_all($invocation, $group, 'thsc_group');
    return $group;
  }

  public function create() {
    $group = new stdClass();
    $group->group_id = 0;
    $group->bundle_type = 'thsc_group';
    $group->group_name = '';
    $group->gender_type = 'B';
    $group->start_age = 0;
    $group->end_age = 0;

    return $group;
  }

  public function delete($group) {
    $this->deleteMultiple(array(
      $group
    ));
  }

  public function deleteMultiple($groups) {
    $group_ids = array();
    if (! empty($groups)) {
      $transaction = db_transaction();
      try {
        foreach ($groups as $group) {
          // Invoke hook_entity_delete().
          module_invoke_all('entity_delete', $group, 'thsc_group');
          field_attach_delete('thsc_group', $group);
          $group_ids[] = $group->group_id;
        }
        db_delete('thsc_group')->condition('group_id', $group_ids, 'IN')->execute();
      }
      catch (Exception $e) {
        $transaction->rollback();
        watchdog_exception('thsc_group', $e);
        throw $e;
      }
    }
  }
}
