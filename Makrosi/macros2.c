#include <stdio.h>

#define ONE_NUMBER(A, B) ((A > B) ? A : B)

int main(){
    printf("%d", ONE_NUMBER(12,16));
    return 0;
}