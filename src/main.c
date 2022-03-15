#include <stdio.h>
#include "string_creation.h"

int main (int argc, char* argv[]) {
	if (argc < 3) {
        printf("Invalid number of cmd argumets\n");
        return 1;
    }

    const char* str1 = argv[1];
    const char* str2 = argv[2];
    const char* result_str = new_string(str1, str2);

    if (result_str) {
        printf("First string: %s\n", str1);
        printf("Second string: %s\n", str2);
        printf("Result string: %s\n", result_str);
    }
    else {
        printf("Error: string lengths must be the same\n");
    }

    return 0;
}
