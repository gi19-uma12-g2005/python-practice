#include <stdio.h>

void SelectionSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        int smallestindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] <arr[smallestindex])
            {
                smallestindex = j;
            }

        }

        temp=arr[i];
        arr[i]=arr[smallestindex];
        arr[smallestindex]=temp;
    }
}

int main()
{
    int arr[5] = {4, 1, 5, 2, 3};
    SelectionSort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    
}