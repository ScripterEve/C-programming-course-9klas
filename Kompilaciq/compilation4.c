#include <stdio.h>
#include <math.h> 

#define SIZE 5 

void pow_four(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}

int main() {
    long arr[SIZE] = {2, 3, 4, 5, 6};
    pow_four(arr, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("%ld ", arr[i]);
    }

    return 0;
}