#include <string.h>
#include <stddef.h>

char* reverser(char *sentence)
{
  char *copy = strdup(sentence);
  char *string;
  
  for(int i = 0; (string = strtok(i ? NULL : copy, " ")) != NULL; i++)
    for(int j = strlen(string) - 1; j >= 0; --j, i++)
      sentence[i] = string[j];
  return sentence;
}
