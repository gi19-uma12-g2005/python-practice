#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int freq[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int j = 1; j < max; j++)
    {
        freq[j] = freq[j] + freq[j - 1];
    }

    for (int i = (n - 1); i >= 0; i--)
    {
        temp[--freq[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    return 0;
}