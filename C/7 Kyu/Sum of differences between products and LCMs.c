#include <stddef.h>

struct IntegerPair { int key, value; };

int gcd(int a, int b)
{
  int c;                   
  while(b != 0)
  { c = a % b; a = b; b = c; }
  return (a != 0? a : 1);
}

int sum_differences_between_products_and_LCMs(struct IntegerPair *pairs, size_t count)
{
  int sum = 0;
  for (size_t i = 0; i < count; i++)
  {
    int product = pairs[i].key * pairs[i].value;
    int lcm = product / gcd(pairs[i].key, pairs[i].value);
    sum += (product - lcm);
  }
  return sum;
}
