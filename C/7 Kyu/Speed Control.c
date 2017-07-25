#include <stdlib.h>

int gps(int s, double* x, int sz)
{
  double max = 0.0;
  for (size_t i = 0; i < sz; i++)
  {
    double temp = x [i] - x[i - 1];
    if (temp > max) max = temp;
  }
  return (s > 0) ? (max * 3600.) / (double) s : 0;
}
