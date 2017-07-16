#include <math.h>

int getNumberOfSquares (int n)
{
  int i,square,result=0,total=0;
  for (i=1;i<n;i++)
  {
    square=pow(i,2);
      total+=square;
    if (total>=n)
      break;
    else
      ++result;
  }
  return result;
}
