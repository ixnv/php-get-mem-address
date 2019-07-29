cmake_minimum_required(VERSION 3.12)

project(php-ext-get-mem-address C)

set(CMAKE_C_STANDARD 11)
set(phproot ~/php-src/)

include_directories(${phproot})
include_directories(${phproot}TSRM/)
include_directories(${phproot}main/)
include_directories(${phproot}Zend/)

add_executable(php-ext-get-mem-address php_get_mem_address.c)
