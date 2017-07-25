#include<string.h>
#include<stdlib.h>

char* longest(char* s1, char* s2)
{
  int i;
  char a1[200]; 
  char a2[31]="";
  strcpy(&a1,s1); strcat(&a1,s2); strcpy(&a2,"");
  for (i=97;i<=122;i++)
    if(strchr(a1,i)!=0)
      strcat(a2, &i);
  return a2;
}
