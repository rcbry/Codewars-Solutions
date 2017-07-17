#include <string.h>

int deadAntCount(const char* ants)
{
  int total=0,a=0,n=0,t=0;
  for (int i=0;i<strlen(ants);++i)
  {
    if (ants[i]=='a' && ants[i+1]=='n' && ants[i+2]=='t') ;
    else if (ants[i-1]=='a' && ants[i]=='n' && ants[i+1]=='t') ;
    else if (ants[i-2]=='a' && ants[i-1]=='n' && ants[i]=='t') ;
    else if (ants[i]=='a') a++;
    else if (ants[i]=='n') n++;
    else if (ants[i]=='t') t++;
  }
  total=a+n+t;
  if (total==0)
    return 0;
  else if (a>=n && a>=t)
    return a;
  else if (n>=a && n>=t)
    return n;
  else if (t>=n && t>=a)
    return t;
}
