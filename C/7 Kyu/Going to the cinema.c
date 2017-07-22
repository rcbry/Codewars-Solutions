#include <math.h>

int movie(int card, int ticket, double ratio)
{
  unsigned short ticketTotal = 0, count = 0;
  float card2 = card, ticket2 = ticket;
  for(; ticketTotal <= ceil(card2); ++count)
  {
    ticketTotal += ticket;
    ticket2 *= ratio;
    card2 += ticket2;
  }
  return count;
}
