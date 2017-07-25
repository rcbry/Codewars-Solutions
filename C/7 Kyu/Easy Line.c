#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double chooseZ(int n, int k)
{
  k = k > n-k ? n-k : k;
  long double result = 1;
  for (int i = 0; i < k; i++)
  {
    result *= n - i;
    result /= (i + 1);
  }
  return result;
}

long long easyLine(int n)
{
  return round(log(chooseZ(2 * n, n)));
}
