PHP_ARG_ENABLE(php_get_mem_address, Whether to enable extension, [ --enable-php-get-mem-address Enable get-mem-address extension])

if test "$PHP_GET_MEM_ADDRESS" != "no"; then
    PHP_NEW_EXTENSION(php_get_mem_address, php_get_mem_address.c, $ext_shared)
fi