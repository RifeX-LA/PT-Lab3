#ifndef STRING_CREATION
#define STRING_CREATION

#include <stdlib.h>
#include <string.h>

char* new_string(const char* str1, const char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 != len2) {
        return NULL;
    }
    
    int size = 2 * len1 + 1;
    char* new_str = (char*)malloc(size * sizeof(char));
    for (int i = 0; i < len1; ++i) {
        new_str[2 * i] = str2[i];
        new_str[2 * i + 1] = str1[i];
    }
    new_str[size] = '\0';
    
    return new_str;
}

#endif //STRING_CREATION