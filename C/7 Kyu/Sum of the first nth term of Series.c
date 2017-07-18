#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *series_sum(const size_t n)
{
  float sum=0;
  for (float i=1;i<n*3;i+=3)
    sum += 1/i;
  char *s = (char *)malloc(3);
  sprintf (s,"%.2f",sum);
  return s;
}
