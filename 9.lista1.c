#include <stdio.h>


int calcule(int y)
{
  printf("Digite a quantidade de metros:");
  scanf("%d",&y);
  imprime(y);
  return 1;

}

int imprime (int s )
{
    printf("A quantidade em metros e: %d",s);
    printf("\nA quantidade em centimetros e: %d",s * 100);
    return 1;

}



int main()

{
  int x;
  calcule(x);
  return 0;

}
