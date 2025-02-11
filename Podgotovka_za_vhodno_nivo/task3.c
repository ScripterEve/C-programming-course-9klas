#include <stdio.h>

int main() {
    int arr[] = {1, 7, 3, 4, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    int sum = 0;
    for( int i = 0; i < size; i++) {
        sum += arr[i] * i;
    }
    printf("\nSum is %d\n", sum);
    return 0;
}