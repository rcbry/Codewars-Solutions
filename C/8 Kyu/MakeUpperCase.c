#include <string.h>

char *makeUpperCase (char *string)
{
  for (int i=0;i<strlen(string);i++)
    string[i]=toupper(string[i]);
  return string;
}
