
#include "jwtpam/string.h"

#include <string.h>
#include <malloc.h>

struct jwtpam_string_t* from_string (const char *_Chars, int _Size) {
    char* _Chars_copy = malloc( _Size * sizeof(char) );

    for (int i = 0; i < _Size; i ++)
        _Chars_copy[i] = _Chars[i];

    struct jwtpam_string_t* _String = malloc( sizeof(struct jwtpam_string_t) );
    _String->size = _Size;
    _String->str  = _Chars_copy;

    return _String;
}
struct jwtpam_string_t* from_char (const char *_Chars) {
    return from_string( _Chars, strlen(_Chars) );
}

void free_jwtpam_string (struct jwtpam_string_t* _String) {
    free(_String->str);

    _String->str = 0;
    free(_String);
}
