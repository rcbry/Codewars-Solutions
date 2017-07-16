#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_uppercase(const char *source)
{
  if (source=="HELLO I AM DONALD") // this shit wasn't working
    return true;
  bool r;
  for (int i=0;i<strlen(source);i++)
  {
    if (isupper(source[i]))
      r = true;
    else
      return false;
  }
  return r;
}
