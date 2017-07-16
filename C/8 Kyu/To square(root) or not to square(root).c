#include <math.h>
#include <stdlib.h>

int* squareOrSquareRoot(int* array, int length)
{
  double result;
  int newArray[length];
  
  for(int i=0;i<length;++i)
  {
    result = sqrt(array[i]);
    if(result == floor(result))
      newArray[i] = result;
    else
      newArray[i] = array[i]*array[i];
  }
  
  return newArray;
}
