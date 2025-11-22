#include <stdio.h>
#include <math.h>

int index_seq(int arr[], int size, int target)
{
  int grp = (int)(sqrt(size)), i, index = 0, start = 0, end = 0, found = 0;
  int arr_in[grp];
  int arr_val[grp];

  for (i = 0; i < size; i += grp)
  {
    arr_in[index] = i;
    arr_val[index] = arr[i];
    index++;
  }

  if (target < arr_val[0])
  {
    return -1;
  }

  for (i = 0; i < index; i++)
  {
    if (target <= arr_val[i])
    {
      if (i == 0)
      {
        start = 0;
        end = arr_in[i];
      }

      else
      {
        start = arr_in[i - 1];
        end = arr_in[i];
      }

      found = 1;
      break;
    }
  }

  if (found == 0)
  {
    start = arr_in[index - 1];
    end = size;
  }

  for (i = start; i < end; i++)
  {
    if (target == arr[i])
    {
      return i;
    }
  }

  return -1;
}
