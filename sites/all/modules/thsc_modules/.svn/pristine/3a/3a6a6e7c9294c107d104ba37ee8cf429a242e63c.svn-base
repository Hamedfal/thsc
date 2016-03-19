<?php

/**
 *
 * @author hamed
 *
 * @file
 * ThscActivePlayerController class for thsc_activeplayer entity
 *
 */
class ThscActivePlayerController extends DrupalDefaultEntityController {
  public function save($player) {
    if (empty ( $player->apid )) {
      $player->registered_at = time ();
    }
    module_invoke_all ( 'entity_presave', $player, 'thsc_activeplayer' );
    $new = empty ( $player->apid );
    $primary_keys = $new ? array () : 'apid';
    drupal_write_record ( 'thsc_activeplayer', $player, $primary_keys );
    $invocation = 'entity_insert';
    if ($new) {
      field_attach_insert ( 'thsc_activeplayer', $player );
    } else {
      field_attach_update ( 'thsc_activeplayer', $player );
      $invocation = 'entity_update';
    }
    module_invoke_all ( $invocation, $player, 'thsc_activeplayer' );
    return $player;
  }
  public function create() {
    $player = new stdClass ();
    $player->apid = 0;
    $player->bundle_type = 'thsc_activeplayer';
    $player->player_id = 0;
    $player->team_id = 0;
    $player->group_od = 0;
    $player->registered_at = time ();
    $player->payment_made = 0;
    $player->season_id = 0;
    
    return $player;
  }
  public function delete($player) {
    $this->deleteMultiple ( array (
      $player 
    ) );
  }
  public function deleteMultiple($players) {
    $player_ids = array ();
    if (! empty ( $players )) {
      $transaction = db_transaction ();
      try {
        foreach ( $players as $player ) {
          // Invoke hook_entity_delete().
          module_invoke_all ( 'entity_delete', $player, 'thsc_activeplayer' );
          field_attach_delete ( 'thsc_activeplayer', $player );
          $player_ids [] = $player->apid;
        }
        db_delete ( 'thsc_activeplayer' )->condition ( 'apid', $player_ids, 'IN' )->execute ();
      } catch ( Exception $e ) {
        $transaction->rollback ();
        watchdog_exception ( 'thsc_activeplayer', $e );
        throw $e;
      }
    }
  }
}