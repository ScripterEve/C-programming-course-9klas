#include <stdio.h>

#define ARRAY_SIZE 4


int main(){
    
    #ifdef ARRAY_SIZE
        #if(ARRAY_SIZE > 0 && 11 > ARRAY_SIZE)
            int arr[ARRAY_SIZE];
            arr[0] = 2;
        for(int i = 1; i < ARRAY_SIZE; i++){
            arr[i] = arr[i - 1] * arr[0];
        }
        for(int i = 0; i < ARRAY_SIZE; i++){
            printf("%d\n", arr[i]);
        }
        #else
            printf("You have to enter a number greater than 0 and lower than 11");
        #endif
        
    #else 
        printf("Macro not found");

    #endif

    

    return 0;
}