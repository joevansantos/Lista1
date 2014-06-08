#include <stdio.h>


int i,num[4],soma;

void ler()
{
  for (i = 0;i < 4;i++)
  {
    printf("Digite uma nota:");
    scanf("%d",&num[i] );
    soma = soma + num[i];
  }
}

void imprime()
{
  printf("A media e: %d",soma / 4);
}

int main()
{
  ler();
  imprime();
  return 0;
}
