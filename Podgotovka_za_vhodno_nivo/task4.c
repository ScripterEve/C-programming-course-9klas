#include <stdio.h>

int findNum(int arr[],int size, int num) {
    int high = size - 1;
    int low = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num) {
            return mid;
        } else if (arr[mid] < num) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;


}

int main() {
    int arr1[] =  {1,2,5,7,8,10};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", findNum(arr1,size,5));
    printf("%d\n", findNum(arr1,size,6));
}