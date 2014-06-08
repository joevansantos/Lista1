
#include <stdio.h>

int x,y;

void ler()
{
   printf("Digite quanto vc ganha por hora:");
   scanf("%d",&x);
   printf("Digite quanto  horas vc trabalha:");
   scanf("%d",&y);
}


void calcule()
{
  printf("\nVc ganha por mes:%d",x * y);}



int main()
{
  ler();
  calcule();
  return 0;
}
