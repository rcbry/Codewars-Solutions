#include <stdlib.h>

int cmp (const void * a, const void * b)
{return (*(int*)a - *(int*)b);}

const char* meanVsMedian(int *numbers, size_t numbersSize)
{
  qsort(numbers, numbersSize, sizeof(int), cmp);

  int mean = 0, i = 0, median;
  while (i < numbersSize)
    mean += numbers[i++];
  median = numbers[i / 2] * i;
  
  if (mean < median)        return "median";
  else if (mean > median)   return "mean";
  else                      return "same";
}
