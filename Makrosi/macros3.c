#include <stdio.h>

#define DEBUG(VAR) printf("The name of the variable: %s\n", #VAR);\
printf("The value of the variable: %d\n", VAR);\
printf("The file it is used in:%s\n",__FILE__);\
printf("The line the function is used in: %d\n", __LINE__);

int main(){
    int var = 7;
    DEBUG(var);
    return 0;
}