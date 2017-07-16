#include <stddef.h>
#include <string.h>
#include <ctype.h>

char* swapVowelCase(const char *str, char *buffer) 
{
  int i;
  for (i=0;i<strlen(str);i++)
  {
    if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
      buffer[i]=tolower(str[i]);
    else if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
      buffer[i]=toupper(str[i]);
    else
      buffer[i]=str[i];
  }
  buffer[i++]='\0';
  return buffer;
}
