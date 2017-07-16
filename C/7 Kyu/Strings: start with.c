#include <string.h>

int startsWith(const char *string, const char *prefix)
{
	int x;
  x = strncmp(string, prefix, strlen(prefix)); // compare string and prefix till prefix length
  if (x<0)
    return 0;
  else if (x==0)
    return 1;
}
