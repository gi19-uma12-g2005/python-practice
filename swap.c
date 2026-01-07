#include <stdio.h>
#include <math.h>

int index_seq(int arr[], int size, int target)
{
    int temp_idx[size];
    int temp_val[size];
    int group = (int)(sqrt(size));
    int index = 0;
    int maybe = 0;
    int start;
    int end;
    for (int i = 0; i < size; i += group)
    {
        temp_idx[index] = i;
        temp_val[index] = arr[i];
        index++;
    }

    if (target < temp_val[0])
    {
        return -1;
    }

    for (int i = 1; i < index; i++)
    {
        if (target <= temp_val[i])
        {
            end = temp_idx[i];
            start = temp_idx[i - 1];
            maybe = 1;
            break;
        }
    }

    if (maybe == 0)
    {
        start = temp_idx[index - 1];
        end = size;
    }

    for (int i = start; i <=end; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[11]={11,12,13,14,15,16,17,18,19,20,21};
    int result=index_seq(arr,11,17);
    printf("%d",result);
    return 0;
}
