
#include <stdio.h>

int f,c;

void ler()
{
   printf("Digite temperatura em fahrenheit:");
   scanf("%d",&f);
}


void calcule()
{
  c = (5 * (f-32) / 9);
}


void imprime()
{
    printf("\nA temperatura em celsius e:%d",c);
}

int main()
{
  ler();
  calcule();
  imprime();
  return 0;
}
