<?php if ($this->san_enabled): ?>

	<?php foreach ($server->ip_addresses as $ip) : ?>
		NameVirtualHost <?php print "*:" . $http_ssl_port . "\n"; ?>
	<?php endforeach; ?>

<?php else: ?>
		<?php foreach ($server->ip_addresses as $ip) : ?>
			NameVirtualHost <?php print $ip . ":" . $http_ssl_port . "\n"; ?>
		<?php endforeach; ?>

<?php endif; ?>

/**
* Not needed for our RedHat Box which has SSL enabled but is checked after this module, thus throwing an annoying *warning upon httpd restart. 
*/

#<IfModule !ssl_module>
#  LoadModule ssl_module modules/mod_ssl.so
#</IfModule>

<?php include('http/apache/server.tpl.php'); ?>



 