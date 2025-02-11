#include <stdio.h>

long decimalConverter(int num) {
    if (num == 0)return 0;
    return num%2+10 * decimalConverter(num/2);
}
int main() {
    printf("%ld", decimalConverter(10));
}