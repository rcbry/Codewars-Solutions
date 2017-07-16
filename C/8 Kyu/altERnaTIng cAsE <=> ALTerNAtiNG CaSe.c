#include <ctype.h>
#include <string.h>

char *to_alternating_case(char *s)
{
  for (int i=0;i<strlen(s);i++)               ////////////////////////////////////////////////
  {                                           // - Check if character is a uppercase letter //
    if (isupper (s[i])) s[i] = tolower(s[i]); // - if is, then lower it                     //
    else s[i] = toupper(s[i]);                // - else upper it                            //
  }                                           ////////////////////////////////////////////////
  return s; // return string
}
