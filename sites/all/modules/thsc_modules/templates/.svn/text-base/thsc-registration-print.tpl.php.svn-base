<?php

/**
 * @file
 * THSC Team Schedule Print Page
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <style type="text/css">
    .buttons {
      text-align: right;
      margin: 0 1em 1em 0;
    }
  </style>
  <style type="text/css" media="print">
    .buttons {
      display: none;
    }
  </style>
</head>
<body>
  <div class="buttons">
    <input type="button" value="<?php print t('Print'); ?>" onclick="window.print();" />
  </div>

<table width="70%" border="0" cellspacing="0" cellpadding="1" align="center" bgcolor="#006699" style="font-family: verdana, arial, helvetica; font-size: small;">
  <tr>
    <td>
      <table width="100%" border="0" cellspacing="0" cellpadding="5" align="center" bgcolor="#FFFFFF" style="font-family: verdana, arial, helvetica; font-size: small;">
        <tr valign="top">
          <td>
            <table width="100%" style="font-family: verdana, arial, helvetica; font-size: small;">
              <tr>
                <td>
                  <?php print $site_logo; ?>
                </td>
                <td width="98%">
                  <div style="padding-left: 1em;">
                  <span style="font-size: large;"><?php print $store_name; ?></span><br />
                  <?php print $site_slogan; ?>
                  </div>
                </td>
                <td nowrap="nowrap">
                  <?php print $store_address; ?><br /><?php print $store_phone; ?>
                </td>
              </tr>
            </table>
          </td>
        </tr>

        <tr valign="top">
          <td>
            <table cellpadding="4" cellspacing="0" border="0" width="100%" style="font-family: verdana, arial, helvetica; font-size: small;">
              <tr>
                <td colspan="2" bgcolor="#006699" style="color: white;">
                  <b>Player Information</b>
                </td>
              </tr>

              <tr>
                <td colspan="2">
                  <table border="0" width="100%" style="font-family: verdana, arial, helvetica; font-size: small;">
                    <tr>
                      <td width="10%">
                        Last Name:
                      </td>
                      <td width="15%">
                        <b><?php print $player->last_name; ?></b>
                      </td>
                      <td width="10%">
                        First Name:
                      </td>
                      <td width="15%">
                        <b><?php print $player->first_name; ?></b>
                      </td>
                      <td width="10%">
                        Gender:
                      </td>
                      <td width="15%">
                        <b><?php print ($player->gender == 'M') ? 'Male' : 'Female'; ?></b>
                      </td>
                      <td width="10%">
                        Birth Date:
                      </td>
                      <td width="15%">
                        <b><?php print format_date($player->birthdate, 'custom', 'Y-m-d'); ?></b>
                      </td>
                    </tr>
                  </table>
                </td>
              </tr>

              <?php foreach ($player->profiles as $profile_key => $print_array): ?>
              <tr>
                <td colspan="2" bgcolor="#006699" style="color: white;">
                  <b><?php print $print_array['label']; ?></b>
                </td>
              </tr>
              <tr>
                <td colspan="2">
                  <table border="0" width="100%" style="font-family: verdana, arial, helvetica; font-size: small;">
                  <?php $col_counter = 1; ?>
                  <?php foreach ($print_array['items'] as $item): ?>
                    <?php if ($col_counter == 1): ?>
                    <tr>
                    <?php endif; ?>
                      <td width="10%">
                        <?php print $item['label']; ?>
                      </td>
                      <td width="15%">
                        <b><?php print $item['data']; ?></b>
                      </td>
                    <?php $col_counter++; ?>
                    <?php if ($col_counter > 4): ?>
                    </tr>
                    <?php $col_counter = 1; ?>
                    <?php endif;?>
                  <?php endforeach; ?>

                  <?php if ($col_counter > 1 && $col_counter <= 4): ?>
                    <?php for ($i = $col_counter; $i < 5; $i++): ?>
                      <td width="10%">
                       &nbsp;
                      </td>
                      <td width="15%">
                        &nbsp;
                      </td>
                    </tr>
                    <?php endfor; ?>
                  <?php endif; ?>
                  </table>
                </td>
              </tr>
              <?php endforeach; ?>

              <tr>
                <td colspan="2">
                  <?php print $season->body[LANGUAGE_NONE][0]['value']; ?>
                </td>
              </tr>

              <tr>
                <td colspan="2">
                  <?php print 'This player was registered by ' . $player->registered_by . '(' . $player->registered_by_email . ') at ' . $player->registered_at; ?>
                </td>
              </tr>

            </table>
          </td>
        </tr>
      </table>
    </td>
  </tr>
</table>

</body>
</html>