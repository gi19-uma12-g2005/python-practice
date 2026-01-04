#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int start, int mid, int end)
{
    int i = start, j = mid + 1, k = 0;
    int temp[end - start + 1];

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= end)
        temp[k++] = arr[j++];

    // Copy back to original array
    for (i = start, k = 0; i <= end; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int size;
    scanf("%d", &size);

    int *ptr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        scanf("%d", &ptr[i]);

    mergeSort(ptr, 0, size - 1);

    for (int i = 0; i < size; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
