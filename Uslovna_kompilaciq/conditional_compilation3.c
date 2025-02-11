#include <stdio.h>

void sort(int arr[], int size){
   #ifdef _WIN32
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    #elif __linux__
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size ; j++){
            if(arr[i] > arr[j]){
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    #elif __APPLE__
    for(int i = 1; i < size; i++){
        int cur = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > cur) {
            arr[j + 1] = arr[j];  
            j--;
        }
        arr[j + 1] = cur;
    
        }
    #else
    
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    
    
   #endif
   
   }
   

int main(){
    int arr[] = {4,7,5,1,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}