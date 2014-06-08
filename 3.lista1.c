#include <stdio.h>

int num;

void ler()
{
   printf("Digite um numero:");
   scanf("%d",&num);
}


void imprime()
{
    printf("O numero informado foi: %d",num);
}

int main()

{
  int x;
  ler();
  imprime();
  return 0;

}
