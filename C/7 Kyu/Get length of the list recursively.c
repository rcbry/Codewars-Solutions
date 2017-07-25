#include <stdio.h>

int lenR (int *array)
{
  if(array == 0) return 0;
  if(*array != 0) return 1 + lenR(++array);
}
