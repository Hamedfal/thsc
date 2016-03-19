<?php

/**
 *
 * @author hamed
 *
 * @file
 * ThscPlayerController class for thsc_player entity
 *
 */


class ThscPlayerController extends DrupalDefaultEntityController {

  public function save($player) {
    if (empty($player->player_id)) {
      $player->created = time();
    }
    module_invoke_all('entity_presave', $player, 'thsc_player');
    $new = empty($player->player_id);
    $primary_keys = $new ? array() : 'player_id';
    drupal_write_record('thsc_player', $player, $primary_keys);
    $invocation = 'entity_insert';
    if ($new) {
      field_attach_insert('thsc_player', $player);
    }
    else {
      field_attach_update('thsc_player', $player);
      $invocation = 'entity_update';
    }
    module_invoke_all($invocation, $player, 'thsc_player');
    return $player;
  }

  public function create() {
    $player = new stdClass();
    $player->player_id = 0;
    $player->type = 'thsc_player';
    $player->bundle_type = 'thsc_player';
    $player->first_name = '';
    $player->last_name = '';
    $player->gender = 'M';
    $player->birthdate = strtotime('2005-10-12');
    $player->created = time();

    return $player;
  }

  public function delete($player) {
    $this->deleteMultiple(array($player));
  }

  public function deleteMultiple($players) {
    $player_ids = array();
    if (!empty($players)) {
      $transaction = db_transaction();
      try {
        foreach ($players as $player) {
          // Invoke hook_entity_delete().
          module_invoke_all('entity_delete', $player, 'thsc_player');
          field_attach_delete('thsc_player', $player);
          $player_ids[] = $player->player_id;
        }
        db_delete('thsc_player')
          ->condition('player_id', $player_ids, 'IN')
          ->execute();
      }
      catch (Exception $e) {
        $transaction->rollback();
        watchdog_exception('thsc_player', $e);
        throw $e;
      }
    }
  }

}