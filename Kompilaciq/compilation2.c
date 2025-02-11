#include <stdio.h>

int lcm(int a, int b){
    int lcm = 0;
    if(a > b){
        lcm = a;
    }
    else lcm = b;

    for(lcm; ;lcm++){
        if(lcm % a == 0 && lcm % b == 0)return lcm;
    }
}

int main(){
    int a = 12;
    int b = 18;
    printf("%d", lcm(a,b));
    return 0;
}