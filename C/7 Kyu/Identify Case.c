#include <string.h>
#include <ctype.h>

const char *case_id(const char *source)
{
  int kebab=0, snake=0, camel=0, multi=0;
  for (int i=1;i<strlen(source);++i)
  {
    if (isupper(source[i]))       camel=1;
    if (source[i]=='-')           kebab=1;
    if (source[i]=='_')           snake=1;
    if ((source[i]=='-' && source[i-1]=='-') || (source[i]=='_' && source[i-1]=='_') ||
    (isupper(source[i]) && isupper(source[i-1])))  multi=1;
  }
  if (kebab==1 && snake==0 && camel==0 && multi==0) return "kebab";
  if (kebab==0 && snake==1 && camel==0 && multi==0) return "snake";
  if (kebab==0 && snake==0 && camel==1 && multi==0) return "camel";
  else return "none";
}
