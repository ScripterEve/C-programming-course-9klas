#include <stdio.h>

int main() {
    int number = 0;
    int multiply = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 0) {
        multiply *= (number % 10);
        number /= 10;
    }
    printf("The multiplication is: %d\n", multiply);
    return 0;
}