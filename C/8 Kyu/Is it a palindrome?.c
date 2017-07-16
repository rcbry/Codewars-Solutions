#include "ctype.h"

int isPalindrom (const char *s)
{
  int len = strlen (s) - 1;
  int res = 1;
  for (int i = 0 ; i <= len ; i++, len--)
    if (tolower(s[i]) != tolower(s[len]))
      res = 0;

  return res;
}
