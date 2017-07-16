#include <stddef.h>
#include <stdlib.h>
size_t *monkey_count(size_t n, size_t *pResultCount)
{
  *pResultCount = n;
  size_t *total = malloc(sizeof(size_t)*n);
  
  for(int i=0;i<n;++i)
    total[i] = i+1;
    
  return total;
}
