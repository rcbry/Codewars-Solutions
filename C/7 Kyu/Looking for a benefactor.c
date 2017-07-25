#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

long long newAvg(double *arr, size_t szArray, double navg)
{
   double x = 0.0, y = 0.0;
   for (size_t i = 0; i < szArray; i++) x += arr[i];
   y = navg * (szArray + 1) - x;
   return (y <= 0) ? -1 : (long long)(ceil(y));
}
