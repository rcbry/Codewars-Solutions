#include <string.h>
#include <stddef.h>

char* replaceNth(const char* text, int n, char oldValue, char newValue)
{
  int counter = 0;
  char* newStr = strdup(text);
  for (size_t i = 0; i < strlen(text); i++) 
  {
    if (text[i] == oldValue)
      counter++;
    if (counter == n && n != 0)
      { newStr[i] = newValue; counter = 0; }
  }
  return newStr;
}
