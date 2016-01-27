  ### YOU NEED TO SET $redirect_host_url VARIABLE BEFORE INCLUDING THIS FILE ###

  rewrite  ^/cgi-bin $redirect_host_url/ permanent;
  rewrite  ^/database $redirect_host_url/ permanent;

  rewrite  ^/script $redirect_host_url/ permanent;
  rewrite  ^/SQLite $redirect_host_url/ permanent;
  rewrite  ^/SQlite $redirect_host_url/ permanent;
  rewrite  ^/sql $redirect_host_url/ permanent;
  rewrite  ^/webdav $redirect_host_url/ permanent;

  rewrite  ^/(.*)\.asp$ $redirect_host_url/ permanent;
  rewrite  ^/(.*)\.php$ $redirect_host_url/ permanent;
  rewrite  ^/(.*)\.shtml$ $redirect_host_url/ permanent;
