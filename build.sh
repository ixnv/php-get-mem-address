#!/bin/bash
phpize
./configure --enable-php-get-mem-address
make
sudo make install
php -d extension=php_get_mem_address.so -r 'echo get_mem_address("f");'