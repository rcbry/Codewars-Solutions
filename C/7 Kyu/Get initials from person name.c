#include <stdlib.h>
#include <string.h>

char *toInitials (const char *name)
{
  char *ini = calloc (strlen(name)+1, sizeof(char));
  
  for (char *i = ini; name && *name; (name = strchr (name, ' ')) ? ++name : 0)
  {
    if (i != ini)
      *i++ = ' ';
    *i++ = *name;
    *i++ = '.';
  }
  return realloc (ini, strlen(ini)+1);
}
