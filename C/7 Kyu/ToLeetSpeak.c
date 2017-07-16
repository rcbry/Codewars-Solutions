#include <string.h>

char* toLeetSpeak (char *speak)
{
  for (int i=0;i<strlen(speak);i++)
  {
    switch(speak[i])
    {
      {
        case 'A' : speak[i]='@'; continue;
        case 'B' : speak[i]='8'; continue;
        case 'C' : speak[i]='('; continue;
        case 'D' : speak[i]='D'; continue;
        case 'E' : speak[i]='3'; continue;
        case 'F' : speak[i]='F'; continue;
        case 'G' : speak[i]='6'; continue;
        case 'H' : speak[i]='#'; continue;
        case 'I' : speak[i]='!'; continue;
        case 'J' : speak[i]='J'; continue;
        case 'K' : speak[i]='K'; continue;
        case 'L' : speak[i]='1'; continue;
        case 'M' : speak[i]='M'; continue;
        case 'N' : speak[i]='N'; continue;
        case 'O' : speak[i]='0'; continue;
        case 'P' : speak[i]='P'; continue;
        case 'Q' : speak[i]='Q'; continue;
        case 'R' : speak[i]='R'; continue;
        case 'S' : speak[i]='$'; continue;
        case 'T' : speak[i]='7'; continue;
        case 'U' : speak[i]='U'; continue;
        case 'V' : speak[i]='V'; continue;
        case 'W' : speak[i]='W'; continue;
        case 'X' : speak[i]='X'; continue;
        case 'Y' : speak[i]='Y'; continue;
        case 'Z' : speak[i]='2'; continue;
      }
    }
  }
  return speak;
}
