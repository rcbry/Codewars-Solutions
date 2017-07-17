#include <inttypes.h>

int64_t foldTo (double distance)
{
  double thick = 0.0001;
  int64_t total = 0;
  if (distance < 0)
    total = -1;
  else
  {
    for (;thick < distance; ++total)
      thick = thick*2;
  }
  return total;
}
