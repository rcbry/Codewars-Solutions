#include <stdbool.h>
#include <string.h>

bool xo (const char* str)
{
  int o=0,x=0;
  for (int i=0;i<strlen(str);i++)
  {
    if (str[i]=='O' || str[i]=='o')
      o++;
    else if 
    (str[i]=='X' || str[i]=='x')
      x++;
  }
  if (x==o)
    return true;
  else
    return false;
}
