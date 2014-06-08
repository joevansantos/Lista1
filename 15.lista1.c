
#include <stdio.h>
#include <math.h>

int x,produto,n;
float y,soma;

void ler()
{
   printf("Digite um numero inteiro:");
   scanf("%d",&x);
   printf("Digite um numero inteiro:");
   scanf("%d",&n);
   printf("Digite um numero real:");
   scanf("%f",&y);
}


void calcule()
{
  produto = (x * x) * (n/2);
  soma = (x ^(3)) ;
}


void imprime()
{
    printf("\nO produto do primeiro com metade do terceiroe:%d",produto);
    printf("\nO triplo mais o terceiro:%d",soma);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
