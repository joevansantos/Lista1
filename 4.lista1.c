#include <stdio.h>

char letra;

void ler()
{
    printf("Digite uma letra:");
    scanf("%c",&letra);
}


void imprime()
{
    printf("O numero informado foi: %d",letra);
}

int main()

{
  ler();
  imprime();
  return 0;

}
