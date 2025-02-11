#include <string.h>
#include "transformation.h"

struct Transformation transform(char str[]){
    struct Transformation transf;
    transf.result = 0;
    transf.error[0] = '\0';

    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i]<= '9'){
            transf.result = transf.result * 10 + (str[i] - '0');
        }else{
            if(str[i] != '-' && str[i + 1] != '\0'){
                transf.result*= - 1;
                return transf;
            } else if(str[i] == '+' && str[i+1]!='\0'){
                return transf;
            }
            transf.result = 0;
            strcpy(transf.error, "Invalid input string");
            return transf;
        }
        i++;
        }
    }