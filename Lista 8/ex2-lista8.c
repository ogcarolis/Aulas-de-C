#include <stdio.h>

int ParOuImpar(int num)
{
  int amigao;
  if(num % 2 == 0)
  {
    amigao = 10;
  }
  else
  {
    amigao = 30;
  }
  return amigao;
}

int main(void) {
  /*Escreva uma função chamada ParOuImpar, que recebe um número inteiro e retorna 10 se for par ou 30 se for ímpar.*/
  int numero;
  
  printf("Digite o seu número: ");
  scanf("%d", &numero);

  ParOuImpar(numero);

  printf("%d", ParOuImpar(numero));
  return 0;
}