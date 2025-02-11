#include <stdio.h>

#define ARR_SIZE 5

int main(){
    int arr[ARR_SIZE] = { 2, 4, 6, 8, 10};
    for(int i = 0; i < ARR_SIZE; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}