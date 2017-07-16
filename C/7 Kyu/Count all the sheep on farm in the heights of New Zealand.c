#include <string.h>

int lostSheep(const int *friday, const int* saturday, int total)
{
  int count=total;
  for (int i=0;friday[i]!=0;++i)
    count -= friday[i];
  for (int j=0;saturday[j]!=0;++j)
    count -= saturday[j];
  return count;
}
