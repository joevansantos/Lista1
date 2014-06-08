#include <stdio.h>

float x,ideal;

void ler()
{
   printf("Digite a altura:");
   scanf("%f",&x);
}


void calcule()
{
  ideal = (72.7 * x) - 58;
}


void imprime()
{
    printf("\nO O peso ideal e: %.f.",ideal);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
