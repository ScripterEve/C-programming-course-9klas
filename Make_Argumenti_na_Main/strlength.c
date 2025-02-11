#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]){
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    printf("Length: %d\n", strlength(argv[1]));
    return 0;
}