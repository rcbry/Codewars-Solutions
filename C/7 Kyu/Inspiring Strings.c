#include <string.h>
#include <stdlib.h>

char *longest_word(char *word_str) {
  unsigned int start = 0, end = 0;
  unsigned int max = 0, count = 0;
  unsigned int max_start, max_end;
  unsigned int i;
  for (i = 0; i <= strlen(word_str); i++) {
    if (word_str[i] == ' ' || word_str[i] == '\0') {
      if (count >= max) {
        max = count;
        max_start = start;
        max_end = end;
      }
      count = 0;
      start = i + 1;
      end = i + 1;
    } else {
      count++;
      end++;
    }
  }
  
  char *longest = malloc((max + 1) * sizeof(char));
  unsigned int j;
  for (i = max_start, j = 0; i < max_end; i++, j++) {
    longest[j] = word_str[i];
  }
  longest[j] = '\0';
  return longest;
}
