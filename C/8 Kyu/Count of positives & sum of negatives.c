#include <stddef.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum)
{
  if(count == 0)
    return;
  
  for(int i = 0; i < count; ++i)
  {
    *positivesCount += values[i] > 0 ? 1 : 0;
    *negativesSum += values[i] < 0 ? values[i] : 0;
  }
}
