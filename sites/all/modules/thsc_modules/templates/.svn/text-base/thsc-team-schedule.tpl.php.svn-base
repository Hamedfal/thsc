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

<table width="95%" border="0" cellspacing="0" cellpadding="1" align="center" bgcolor="#006699" style="font-family: verdana, arial, helvetica; font-size: small;">
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
                  <b><?php print $team->team_name . ' (' . $group->group_name . ')'; ?></b>
                </td>
              </tr>
              <?php if (isset($team_information)): ?>
              <tr>
                <td nowrap="nowrap">
                  <b><?php print 'Coach: '; ?></b>
                </td>
                <td width="98%">
                  <?php ''; ?>
                </td>
              </tr>
              <?php endif; ?>

              <tr>
                <td nowrap="nowrap">
                  <b><?php print ' '; ?></b>
                </td>
                <td width="98%">
                  <?php ' '; ?>
                </td>
              </tr>

              <tr>
                <td colspan="2">
                  <table border="0" width="100%" style="font-family: verdana, arial, helvetica; font-size: small;">
                    <tr>
                      <td bgcolor="#006699" style="color: white;">
                        <b>Time</b>
                      </td>
                      <td bgcolor="#006699" style="color: white;">
                        <b>Type</b>
                      </td>
                      <td bgcolor="#006699" style="color: white;">
                        <b>Team A</b>
                      </td>
                      <td bgcolor="#006699" style="color: white;">
                        <b>Team B</b>
                      </td>
                      <td bgcolor="#006699" style="color: white;">
                        <b>Location</b>
                      </td>
                    </tr>

                    <?php foreach ($schedule as $time => $game) :?>
                    <tr>
                      <td width="16%">
                        <?php $game_time = format_date($time, 'custom', 'D, j M Y H:i'); ?>
                        <?php print $game_time; ?>
                      </td>
                      <td width="8%">
                        <?php print $game['type']; ?>
                      </td>
                      <td width="20%">
                        <?php print $game['team_a'] . ((!empty($game['goal_forward'])) ? ' (' . $game['goal_forward'] . ')' : ''); ?>
                      </td>
                      <td width="20%">
                        <?php print $game['team_b'] . ((!empty($game['goal_accept'])) ? ' (' . $game['goal_accept'] . ')' : ''); ?>
                      </td>
                      <td>
                        <?php print $game['location']; ?>
                      </td>
                    </tr>
                    <?php endforeach; ?>

                  </table>
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