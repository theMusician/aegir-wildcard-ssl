<?php
  function olum_provision_apache_vhost_config($uri, $data) {
    return "SSLCertificateChainFile /var/aegir/config/server_master/ssl.d/" . $uri . "/sf_bundle.crt";
  }
?>
