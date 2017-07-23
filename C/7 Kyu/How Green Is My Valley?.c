#include <stdlib.h>
#include <stddef.h>

int compare_ints (const void *a, const void *b);

int* makeValley(int *arr, size_t sizeArray)
{
  qsort(arr, sizeArray, sizeof(int), compare_ints);
  int *newArr = calloc(sizeof(int), sizeArray);
  for (size_t i = 0; i < sizeArray; i++)
  {
    if (i % 2 == 0) newArr[i / 2] = arr[sizeArray - 1 - i];
    else newArr[sizeArray - 1 - i / 2] = arr[sizeArray - 1 - i];
  }
  return newArr;
}
