#include <stdlib.h>
struct moss{
    int tmp;
    int val;
};

void sort(struct moss *tableau,int longueur){
     int i, inversion;
     do{
       inversion=0;
       for(i=0;i<longueur-1;i++){
          if (tableau[i].tmp>tableau[i+1].tmp){
            int inter1 = tableau[i].tmp,inter2 = tableau[i].val;
            tableau[i].tmp = tableau[i+1].tmp;
            tableau[i].val = tableau[i+1].val;
            tableau[i+1].tmp = inter1;
            tableau[i+1].val = inter2;
            inversion=1;}
       }
     }while(inversion);
}

int* sortByValueAndIndex(int* num, int tai)
{
  struct moss *tab = calloc(tai,sizeof(struct moss));
  for(int i=0;i<tai;i++) {tab[i].val=num[i];tab[i].tmp=num[i]*(i+1);}
  sort(tab,tai);
  for(int i=0;i<tai;i++) num[i] = tab[i].val;
  return num;
}
