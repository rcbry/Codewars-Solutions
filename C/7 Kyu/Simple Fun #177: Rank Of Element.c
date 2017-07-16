#include <stddef.h>

size_t rank_of_element(const int *arr, size_t count, size_t i)
{
  int x=0; // counter
  for (int j=0;j<count;j++)
  {
    if (j<i)
    {
      if (arr[j]<=arr[i])
        x++;
    }
    else if (j>i)
    {
      if (arr[j]<arr[i])
        x++;
    }
  }
  return x;
}
