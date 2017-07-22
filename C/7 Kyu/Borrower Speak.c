#include <ctype.h>
#include <stdlib.h>

char* borrow(const char* source)
{
  size_t source_len = strlen(source);
  char* borrower = malloc(source_len + 1);
  size_t borrower_len = 0;
  
  for (size_t i = 0; i < source_len; i += 1)
  {
    char c = source[i];
    if (!ispunct(c) && !isspace(c))
      borrower[borrower_len++] = tolower(c);
  }
  
  borrower[borrower_len] = 0;
  return realloc(borrower, borrower_len + 1);
}

