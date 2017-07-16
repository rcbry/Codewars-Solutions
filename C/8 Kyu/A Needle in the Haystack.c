#include <stdio.h>

char *find_needle(const char **haystack, size_t count)
{
  for(int i=0; i<count;++i)
  {
    if(!strcmp(haystack[i], "needle")) // strcmp will return 0 if true, so we need '!' to it to work
    {
      char* buff;
      asprintf(&buff, "found the needle at position %d", i);
      return buff;
    }
  }
}
