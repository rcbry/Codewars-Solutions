#include <string.h>

char* printerError(char *s)
{
  int c = 0;
  int len = strlen(s);
  char *r;

  while(*s){
    if (*s < 'a' || *s > 'm') c++;
    s++;
  }
  
  asprintf(&r, "%d/%d", c, len);
  
  return r;
}
