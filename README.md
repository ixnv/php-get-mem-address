# php-get-mem-address

simple php extension which allows to get memory address of a variable

made for learning purposes only

if you want CLion to work properly with this code then change *set(phproot ~/php-src/)* in CMakeLists to your own php-src directory

### build
run `build.sh`

### usage
```php
<?php

$foo = "bar";
echo get_mem_address($foo); // 0x7ff96fc57960
```
