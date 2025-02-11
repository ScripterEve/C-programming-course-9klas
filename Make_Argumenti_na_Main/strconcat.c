#include <stdio.h>
#include <string.h>
#include "mystrings.h"

#define MAX_LENGTH 50

int main(int argc, char *argv[]) {
    if (argc != 3){
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    char str1[MAX_LENGTH * 2 + 1];
    char str2[MAX_LENGTH + 1];

    if (strlength(argv[1]) > MAX_LENGTH || strlength(argv[2]) > MAX_LENGTH){
        printf("Error: Each string must not exceed %d characters.\n", MAX_LENGTH);
        return 1;
    }
    strcpy(str1, argv[1]);
    strcpy(str2, argv[2]);
    strconcat(str1, str2);

    printf("Concatenated String: %s\n", str1);
    return 0;
}