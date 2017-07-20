#include <stdlib.h>

char *switcher(const char **codes, size_t count)
{
  char *s;
  s = (char*)malloc((count+1) * sizeof(char));
  s[count] = '\0';
  for (int i = 0; i < count; i++)
  {
    int num = atoi(*codes);
    switch (num)
    {
      case 29: s[i] = ' '; break;
      case 28: s[i] = '?'; break;
      case 27: s[i] = '!'; break;
      case 26: s[i] = 'a'; break;
      case 25: s[i] = 'b'; break;
      case 24: s[i] = 'c'; break;
      case 23: s[i] = 'd'; break;
      case 22: s[i] = 'e'; break;
      case 21: s[i] = 'f'; break;
      case 20: s[i] = 'g'; break;
      case 19: s[i] = 'h'; break;
      case 18: s[i] = 'i'; break;
      case 17: s[i] = 'j'; break;
      case 16: s[i] = 'k'; break;
      case 15: s[i] = 'l'; break;
      case 14: s[i] = 'm'; break;
      case 13: s[i] = 'n'; break;
      case 12: s[i] = 'o'; break;
      case 11: s[i] = 'p'; break;
      case 10: s[i] = 'q'; break;
      case 9: s[i] = 'r'; break;
      case 8: s[i] = 's'; break;
      case 7: s[i] = 't'; break;
      case 6: s[i] = 'u'; break;
      case 5: s[i] = 'v'; break;
      case 4: s[i] = 'w'; break;
      case 3: s[i] = 'x'; break;
      case 2: s[i] = 'y'; break;
      case 1: s[i] = 'z'; break;
    }
    *codes++;
  }
  return s;
}
