#include <stdio.h>

int x;

void ler()
{
   printf("Digite um lado do quadrado:");
   scanf("%d",&x);
}


void calcule()
{
  printf("\nA area do quadrado e:%d",x * x);
}


void imprime()
{
    printf("\nO dobro dA area do quadrado e:%d",(x * x) * 2);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
