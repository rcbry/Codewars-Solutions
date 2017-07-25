#include <stdlib.h>

char** word_search(const char* query, const char** strings, size_t count, size_t* out_count)
{
  char** matching = malloc(count * sizeof(char*));
  *out_count = 0;
  
  for (int i = 0; i < count; ++i)
    if (strcasestr(strings[i], query))
      matching[(*out_count)++] = strdup(strings[i]);
      
  if (*out_count == 0) matching[(*out_count)++] = strdup("None");
  return realloc(matching, *out_count * sizeof(char*));
}
