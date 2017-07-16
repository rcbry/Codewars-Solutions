#include <string.h>

int correct_tail (const char *body, const char *tail)
{
  return !strcmp (body + strlen (body) - strlen(tail), tail);
}
