#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char **argv){
    if (argc < 3)return 1;
    int test[3];
    int size = sizeof(test) / sizeof(test[0]);
     for (int i = 1; i < argc; i++) {
        for(int j = 0; j < size; j++ ){
            test[j] = atoi(argv[i]);
        } 
    }
    safeadd(test[0], test[1]);
    return 0;
}