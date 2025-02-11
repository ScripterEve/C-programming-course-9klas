#ifndef SAFEINT_H_
#define SAFEINT_H_

struct SafeResult{
    int value;
    int errorflag;
};

struct SafeResult safeadd(int a, int b);
struct SafeResult safesubstract(int a,int b);
struct SafeResult safemultiply(int a,int b);
struct SafeResult safedivide(int a,int b);
struct SafeResult safestrtoint(char str[150]);

#endif