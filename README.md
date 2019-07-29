# php-mem-get-address

simple php extension that return memory address of a variable

made for learning purposes only

### build
* change *set(phproot ~/php-src/)* in CMakeLists to your own php-src directory
* run build.sh

### usage
```php
<?php

$foo = "bar";
echo get_mem_address($foo); 
```