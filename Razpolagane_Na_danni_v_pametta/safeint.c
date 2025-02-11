#include <stdio.h>
#include "safeint.h"
#include <limits.h>

struct SafeResult safeadd(int a, int b){
    struct SafeResult add;
    add.errorflag = 0;
    long long sum = (long long)a + (long long)b;
    if(sum > INT_MAX || sum < INT_MIN){
        add.value = 0;
        add.errorflag = 1;
    }
    else{
        add.value = (int)sum;
    }
    return add;
}

struct SafeResult safesubstract(int a, int b){
    struct SafeResult substract;
    substact.errorflag = 0;
    long long substract = (long long)a - (long long)b;
    if(substract > INT_MAX || substract < INT_MIN){
        substract.value = 0;
        substract.errorflag = 1;
    }
    else{
        substract.value = (int)substract;
    }
    return substact;
}

struct SafeResult safemultiply(int a, int b){
    struct SafeResult multiplication;
    multiplication.errorflag = 0;
    long long multiply = (long long)a * (long long)b;
    if(multiply > INT_MAX || multiply < INT_MIN){
        multiplication.value = 0;
        multiplication.errorflag = 1;
        return multiplication;
    }
    else{
        multiplication.value = (int)multiply;
    }
    return multiplication;
}

struct SafeResult safedivide(int a, int b){
    struct SafeResult division;
    division.errorflag = 0;
    if(b == 0){
        division.value = 0;
        division.errorflag = 1;
    }
    else{
        long long divide = (long long)a / (long long)b;
        if(divide > INT_MAX ||divide < INT_MIN){
            division.value = 0;
            division.errorflag = 1;
            return division;
        }
        else{
        division.value = (int)divide;
        }
    }
    return division;
}

struct SafeResult safestrtoint(char str[150]){
    struct Saferesult result;
    result.errorflag = 0;
    for(int i = 0;str[i] != "\0";i++){
        if(str[i] < 30 || str[i] > 39){
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
        int digit = str[i] - 30;
        result.value = safemultiply(result.value, 10);
        result.value = safeadd(result.value, digit);
    }

    return result;
}