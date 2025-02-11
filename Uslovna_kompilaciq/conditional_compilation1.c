#include <stdio.h>

#define DEBUG()

void sort(int arr[], int size)
{
    int sum = 0;
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
    for (int i = 0; i < size - 1; i++) {
        if(i % 3 == 0){
            sum =+ arr[i];
            #ifdef DEBUG
                printf("%d ",arr[i]);
            #endif
        }
    }
    printf("\n");
    #ifdef DEBUG
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

    #endif
    printf("\nSum of the numbers that can be divided by 3 is: %d\n", sum);
}


int main()
{
    int arr[] = {4,7,1,8,9,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    return 0;
}