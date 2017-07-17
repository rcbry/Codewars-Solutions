#include <string.h> // for strlen
#include <stdlib.h> // for malloc
#include <ctype.h>  // for tolower and toupper

char *accum(const char *source)
{
  int length = strlen(source);                                        // String Length
  char *str = (char *) malloc(length * (length + 1) / 2 + length);    // Memory Allocation
  int x = 0, y = 1;                                                   // Set counters
  for (int i = 0; i < strlen(source); ++i, ++x)                       // Main Loop
  {                                                                   // ----------------- //
    str[x] = toupper(source[i]); ++x;                                 // Uppercase letter  //
    while (y == 0) { str[x++] = '-'; ++y; }                           // First "-"         //
    for (int j = 0; j < i; ++j, ++x) str[x] = tolower(source[i]);     // Lowercase letters //
    if (i != strlen(source)-1)  str[x] = '-';                         // All others "-"    //
  }                                                                   // ----------------- //
  return str;
}
