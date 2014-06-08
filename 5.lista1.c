#include <stdio.h>

char letra[30] ,letra2[30] ;

void ler()
{
    printf("Digite uma palavra:");
    gets(letra);
    printf("Digite outra palavra:");
    gets(letra2);
}

void imprime()
{
    printf("As palavra informada foram:%s e %s",letra,letra2);
    printf("\nAs segundas letras das palavras informadas foram:%c e %c",letra[1] ,letra2[1]);
}

int main()
{
  ler();
  imprime();
  return 0;
}
