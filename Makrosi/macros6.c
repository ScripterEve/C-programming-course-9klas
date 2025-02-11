#include <stdio.h>

#define SWAP(A, B, TYPE) \
TYPE temp; \
temp = A; \
A = B; \
B = temp;

#define SORT(array, size, type, symbol) \
for (int i = 0; i < size - 1; i++) { \
for (int j = 0; j < size - i - 1; j++) { \
if (array[j] symbol array[j + 1]) { \
SWAP(array[j], array[j + 1], type); \
} \
} \
}

int main() {
    int arr[] = {9, 8, 5, 6, 7, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    SORT(arr, size, int, <);
    printf("Degrading: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    SORT(arr, size, int, >);
    printf("Grading: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}