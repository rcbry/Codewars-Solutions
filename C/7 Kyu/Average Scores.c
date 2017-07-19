#include <stddef.h>
#include <math.h>

int total = 0;
int average(const int *values, size_t count)
{
  float avg = values[count-1];

  if (!total)           total = count;
  if (count > 1)        avg += average(values, count-1);
  if (total == count)   { avg = round(avg / total); total = 0; }
  return avg;
}
