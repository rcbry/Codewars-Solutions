#include <stddef.h>

int invite_more_women(int *arr, size_t count)
{
  int female=0, male=0;
  for (int i=0;i<count;i++)
  {
    if (arr[i]==-1) female++;
    if (arr[i]==1) male++;
  }
  if (male > female) return 1;
  else return 0;
}
