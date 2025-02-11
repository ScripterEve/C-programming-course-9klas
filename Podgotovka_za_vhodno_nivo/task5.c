#include <stdio.h>

char searchAscii(char str[]) {
    char biggest = str[0];
    for (int i = 1; str[i] != '\0' ; i++) {
        if (str[i] > biggest) {
            biggest = str[i];
        }
    }
    return biggest;
}
 int main() {
     printf("%c", searchAscii("Ivan"));
     return 0;
 }