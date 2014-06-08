#include <stdio.h>

int num,num2,soma;

void ler()
{
   printf("Digite um numero:");
   scanf("%d",&num);
   printf("Digite um numero:");
   scanf("%d",&num2);
}


void calcule()
{
 soma = num + num2;
}


void imprime()
{
  printf("A soma foi:%d",soma);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
