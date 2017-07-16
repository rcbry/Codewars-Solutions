#include <string.h>

char *repeat_str(size_t count, const char *src)
{
  int length = strlen(src);
  
  char *result = (char *) calloc((length*count+1), sizeof(char));
  
  for (int i=0; i<count; ++i)
    strcat(result, src);

  return result;
}
