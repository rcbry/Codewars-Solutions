#include <stdlib.h>

int int_cmp(const void *a, const void *b);

int sum(int* numbers, int numbersCount)
{
  int max=0,min=0,sum=0;
  qsort(numbers, numbersCount, sizeof(int), int_cmp);
  for (int i=1;i<numbersCount-1;++i)
    sum+=numbers[i];
  return sum;
}

int int_cmp(const void *a, const void *b)
{ 
    const int *ia = (const int *)a;
    const int *ib = (const int *)b;
    return *ia  - *ib; 
} 
