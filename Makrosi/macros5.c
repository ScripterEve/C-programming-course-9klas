#include <stdio.h>

#define SWAP(A, B, TYPE)\
    TYPE temp;\
    temp = A;\
    A = B;\
    B = temp;

int main(){
    int a = 7;
    int b = 8;

    SWAP(a ,b , int);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}