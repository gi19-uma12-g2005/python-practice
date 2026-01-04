#include <stdio.h>
#include <stdlib.h>

int Partition(int arr[], int start, int end)
{
    int i = start - 1;
    int j = start;
    while (j < end)
    {
        if (arr[j] <= arr[end])
        {
            int temp = arr[++i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        j++;
    }

    int temp = arr[++i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}
void QUICKSORT(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot = Partition(arr, start, end);
        QUICKSORT(arr, start, pivot - 1);
        QUICKSORT(arr, pivot + 1, end);
    }

    
    
} 


int main()
{
   
   int  arr[8]={11,16,13,11,4,12,6,7};
    QUICKSORT(arr,0,7);
    int i=0;
    while(i<8)
    {
        printf("%d \n",arr[i]);
        i++;
    }
}
