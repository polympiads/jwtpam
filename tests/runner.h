#pragma once

const int SUCCESS = 0;
const int FAILED  = 1;

struct test_result_t {
    const char* message;
    int result;
};
