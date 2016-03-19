<div class="container">
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&appId=398137096957370&version=v2.0";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>

<div class="topbanner"></div>

 <?php if ($main_menu): ?>
      <div id="main-menu" class="navbar navbar-inverse">
      	<?php print render($page['mainmenu']); ?>
      </div> <!-- /#main-menu -->
    <?php endif; ?>

   

    

    <?php print render($page['header']); ?>
    
    
   <div class="divsecondary">
   	<?php if ($breadcrumb): ?>
      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>
    
    <?php if ($secondary_menu): ?>
      <div id="secondary-menu" class="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'id' => 'secondary-menu-links',
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => t('Secondary menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </div> <!-- /#secondary-menu -->
    <?php endif; ?>
</div>
  
  
  
  <div id="maincontent">
  
 <div>
<?php
    print $messages;
?>
</div>
	<div class="row">
    
    <div class="col-md-9">
    <div class="jumbotron">
     <?php print render($page['custom']); ?>	
    </div>
    <div class="row">
<div class="col-md-12">
<?php print render($page['fulltop']); ?>
</div>
    <div class="col-md-12">
    	<div class="col-md-6">
    		<div class="topsections"><?php print render($page['top1']); ?>
    			</div>
    		</div>
    	<div class="col-md-6">
    		<div class="topsections"><?php print render($page['top2']); ?></div></div>
    </div>
    </div>
 
    <hr>
      <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="title" id="page-title">
          <?php print $title; ?>
        </h1>
      <?php endif; ?>
<div>
  <?php print render($page['contact']); ?>
</div>
      <?php print render($title_suffix); ?>
      <?php if ($tabs): ?>
        <div class="tabs">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>

    </div> <!-- /.section, /#content -->

    <?php if ($page['sidebar_second']): ?>
      <div class="col-md-3">
        <?php print render($page['sidebar_second']); ?>
      </div> <!-- /.section, /#sidebar-second -->
    <?php endif; ?>
 	
  	</div>
    <div class="footer">
    &copy; 2015 Toronto Hawks Soccer Club. All rights reserved.
    </div>
  </div>
	
	
	</div>