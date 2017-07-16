#include <stddef.h>

int get_average(const int *marks, size_t count)
{
  int avg=0;
  for (int i=0;i<count;i++)
  {
    avg+=marks[i];
  }
  return avg/count;
}
