#include <stdbool.h>
#include <stdlib.h>

typedef bool (*Predicate)(const int*);

int* dropWhile(const int* values, size_t count, Predicate  predicate, size_t* out_count)
{
  for (; count && predicate(values); ++values, --count) ;
  *out_count = count;
  size_t size = count * sizeof(int);
  return size ? memcpy(malloc(size), values, size) : NULL;
}
