#include <stdio.h>

int primeChecker(int number) {
    int counter = 0;
    if(number <= 1) return 0;

    for(int i = number; i > 0; i--) {
        if(number % i == 0){
            counter++;
        }
    }
    if(counter == 2) {
        return number;
    }
    return 0;
}

int main() {
    int sum = 0;
    int arr[] = {1,7,10,15,16,13,23,30};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        if(primeChecker(arr[i])) {
            sum += arr[i];
        }
    }
        printf("%d\n", sum);
    return 0;
}