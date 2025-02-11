#include <stdio.h>

#define FUNC(A, B) (((A)+(B))*((A)+(B)))

int main(){
    int a = 5;
    int b = 4;

    printf("%d", FUNC(a,b));

    return 0;
}