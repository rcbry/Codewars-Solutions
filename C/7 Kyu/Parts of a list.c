#include <string.h>
#include <stdlib.h>


typedef struct Pair Pair;
struct    Pair 
{
 char    *first;
 char    *snd;
};

void    *mymalloc(int size)
{
  void *new;
  new = malloc(size);
  if (new == NULL)
    exit(1);
  memset(new, 0, size);
  return new;
}


char      *myTabToStringWithSpaces(char **arr, int sz, int sumLen, int *wLen)
{
  char    *res;
  char    *cur;
  int     wCount;

  res = mymalloc((sumLen) * (sizeof(*res)));
  
  for (cur = res, wCount = 0; wCount < sz; wCount++)
  {
     memcpy(cur, arr[wCount], wLen[wCount]);
     cur += wLen[wCount];
     if (wCount < (sz - 1))
     {
       *cur = ' ';
       cur++;
     }
  }

  return res;
}

Pair**    partlist(char** arr, int sz) 
{
  Pair    **res;
  int     step;
  int     wCount;
  int     *wLen;
  int     firstLen;
  int     sndLen;
  int     sumLen;
  char    *total;

  wLen = mymalloc(sz * sizeof(*wLen));
  res = mymalloc((sz - 1) * sizeof(*res));

  for (wCount = 0, sumLen = 0; wCount < sz; wCount++)
  {
    wLen[wCount] = strlen(arr[wCount]);
    sumLen += wLen[wCount];
  }

  sumLen += sz - 1;  

  total = myTabToStringWithSpaces(arr, sz, sumLen, wLen);

  for (step = 0, firstLen = -1, sndLen = sumLen; step < (sz - 1); step++)
  {
    res[step] = mymalloc(sizeof(*res[step]));
    firstLen += wLen[step] + 1;
    sndLen -= (wLen[step] + 1);
    
    res[step]->first = strndup(total, firstLen);
    res[step]->snd = strndup((total + firstLen + 1), sndLen); 
  }

  free(wLen);
  free(total);
  return res;
}
