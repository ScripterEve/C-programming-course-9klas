#include "mystrings.h"

int strlength(char str[]){
    int length = 0;
    while (str[length] != '\0'){
        length++;
    }
    return length;
}

void strconcat(char str1[], char str2[]){
    int len1 = strlength(str1);
    int len2 = strlength(str2);
    int i;

    for (i = 0; i <= len2; i++){
        str1[len1 + i] = str2[i];
    }
}

int strcompare(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] < str2[i]) return -1;
        if (str1[i] > str2[i]) return 1;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    return (str1[i] == '\0') ? -1 : 1;
}