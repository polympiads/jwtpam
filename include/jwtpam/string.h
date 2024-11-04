#pragma once

struct jwtpam_string_t {
    char* str;
    int   size;
};

struct jwtpam_string_t* from_char   (const char *_Chars);
struct jwtpam_string_t* from_string (const char *_Chars, int _Size);

void free_jwtpam_string (struct jwtpam_string_t* _String);
