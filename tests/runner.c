
#include "tests/runner.h"

#include "tests/test_string.h"

#include <stdio.h>

#define RUN_TEST(x) { struct test_result_t res = x(); if (res.result != 0) { err ++; printf("Test %d failed !\n", val + err); } else { val ++; }; if (res.message != 0) { printf("%s\n", res.message); } };

struct test_result_t init_test () {
    struct test_result_t res;
    res.message = 0;
    res.result  = SUCCESS;
    return res;
}

int main () {
    int err = 0;
    int val = 0;

    RUN_TEST(init_test);

    RUN_TEST(test_create_string);
    RUN_TEST(test_create_string_with_size);

    printf("\n");
    printf("NUMBER OF ERRORS  : %d\n", err);
    printf("NUMBER OF SUCCESS : %d\n", val);
}
