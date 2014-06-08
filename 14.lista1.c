#include <stdio.h>

int f,c;

void ler()
{
   printf("Digite temperatura em celsius:");
   scanf("%d",&c);
}


void calcule()
{
  f = (c * 9 /5) + 32 ;
}


void imprime()
{
    printf("\nA temperatura em fahrenheit e:%d",f);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
