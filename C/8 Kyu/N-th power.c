#include <math.h>

int index (int *array, int size, int n)
{
  if (size<=n)
    return -1;
  else
    return pow(array[n],n);
}
