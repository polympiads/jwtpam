#pragma once

#include "tests/runner.h"
#include "jwtpam/string.h"

struct test_result_t test_create_string () {
    const char* _Char = "Hello, World !";
    struct jwtpam_string_t* _String = from_char( _Char );

    int valid = 1;
    valid &= _String->size == 14;

    for (int i = 0; i < 14; i ++)
        valid &= _String->str[i] == _Char[i];

    free_jwtpam_string(_String);
    _String = 0;

    struct test_result_t result;
    result.result  = valid ? SUCCESS : FAILED;
    result.message = 0;

    return result;
}

struct test_result_t test_create_string_with_size () {
    const char* _Char = "Hello, World !";
    struct jwtpam_string_t* _String = from_string( _Char, 8 );

    int valid = 1;
    valid &= _String->size == 8;

    for (int i = 0; i < 8; i ++)
        valid &= _String->str[i] == _Char[i];

    free_jwtpam_string(_String);
    _String = 0;

    struct test_result_t result;
    result.result  = valid ? SUCCESS : FAILED;
    result.message = 0;

    return result;
}
