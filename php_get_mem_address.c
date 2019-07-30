#include <Zend/zend_types.h>
#include "php.h"
#include "php_get_mem_address.h"
#include "stdlib.h"

// register our function to the PHP API
// so that PHP knows, which functions are in this module
zend_function_entry get_mem_address_functions[] = {
    PHP_FE(get_mem_address, NULL)
    { NULL, NULL, NULL }
};

// some pieces of information about our module
zend_module_entry get_mem_address_module_entry = {
    STANDARD_MODULE_HEADER,
    PHP_GET_MEM_ADDRESS_EXTNAME,
    get_mem_address_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    PHP_GET_MEM_ADDRESS_VERSION,
    STANDARD_MODULE_PROPERTIES
};

// use a macro to output additional C code, to make ext dynamically loadable
ZEND_GET_MODULE(get_mem_address)

// this function will be made available to PHP
PHP_FUNCTION(get_mem_address) {
    zval *value;

    if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &value) != SUCCESS) {
        return;
    }

    char address[1024];
    sprintf(address, "%p", value->value);

    RETURN_STRING(address);
}
