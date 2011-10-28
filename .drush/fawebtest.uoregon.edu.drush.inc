<?php
  function fawebtest_provision_apache_vhost_config($uri, $data) {
    return "SSLCertificateChainFile /var/aegir/config/server_faprod/ssl.d/" . $uri . "/sf_bundle.crt";
  }
?>
