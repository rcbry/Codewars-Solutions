#include <stdlib.h>

int* completeSeries(int* arr, int arrLength)
{ 
  int max = 0;
  for(int i = 0; i < arrLength; ++i)
    if(arr[i] > max)
      max = arr[i];
      
  int *ans1 = (int*)malloc(1 * sizeof(int));
  *ans1 = 0;
  for(int j = 0; j < arrLength; ++j)
    if(arr[j] == arr[j+1])
      return ans1;
      
  int *ans2 = (int*)malloc((max+1) * sizeof(int));
  for(int k = 0; k < max+1; ++k)
    ans2[k] = k; 
  return ans2;
}
