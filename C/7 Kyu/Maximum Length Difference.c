
#include <strings.h>
#include <stddef.h>

int mxdiflg(
  const char **firstArray, size_t firstArrayLength, 
  const char **secondArray, size_t secondArrayLength)
{
  int max = -1, l1, l2;
  for(size_t i = 0; i< firstArrayLength ; i++)
  {
    l1 = strlen(firstArray[i]);
    for(size_t j = 0; j < secondArrayLength; j++)
    {
      l2 = strlen(secondArray[j]);
      if(l1 > l2 && l1 - l2 > max) max = l1 - l2;
      else if(l2 - l1 > max) max = l2 - l1;
    }
  }
  return max;
}
