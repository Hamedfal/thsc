<?php

/**
 *
 * @author hamed
 *
 *         @file
 *         ThscTeamController class for thsc_team entity
 *
 */
class ThscTeamController extends DrupalDefaultEntityController {

  public function save($team) {
    module_invoke_all('entity_presave', $team, 'thsc_team');
    $new = empty($team->team_id);
    $primary_keys = $new ? array() : 'team_id';
    drupal_write_record('thsc_team', $team, $primary_keys);
    $invocation = 'entity_insert';
    if ($new) {
      field_attach_insert('thsc_team', $team);
    }
    else {
      field_attach_update('thsc_team', $team);
      $invocation = 'entity_update';
    }
    module_invoke_all($invocation, $team, 'thsc_team');
    return $team;
  }

  public function create() {
    $team = new stdClass();
    $team->team_id = 0;
    $team->bundle_type = 'thsc_team';
    $team->team_name = '';
    $team->group_id = 0;

    return $team;
  }

  public function delete($team) {
    $this->deleteMultiple(array(
      $team
    ));
  }

  public function deleteMultiple($teams) {
    $team_ids = array();
    if (! empty($teams)) {
      $transaction = db_transaction();
      try {
        foreach ($teams as $team) {
          // Invoke hook_entity_delete().
          module_invoke_all('entity_delete', $team, 'thsc_team');
          field_attach_delete('thsc_team', $team);
          $team_ids[] = $team->team_id;
        }
        db_delete('thsc_team')->condition('team_id', $team_ids, 'IN')->execute();
      }
      catch (Exception $e) {
        $transaction->rollback();
        watchdog_exception('thsc_team', $e);
        throw $e;
      }
    }
  }
}
