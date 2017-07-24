#include <stdio.h>

char* compose(char* s1, char* s2)
{
  int n = 0;
  while (s1[n] != '\n') n++;
  char *result = malloc( (n + 2) * n  * sizeof(char));
  int pos = 0;
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n+1; j++)
    {
      if (j < i+1)
        result[pos++] = s1[i * (n+1) + j];
      else
        result[pos++] = s2[(n-1-i) * (n+ 1) + j-i-1];      
    }
    result[pos++] = '\n';
  }
     
  result[(n) * (n+2)-1] = '\0'; 
  
  return result;

}
