#include <stdio.h>

int MAX(int num1, int num2)
{
  int maior;
  if(num1 > num2)
  {
    maior = num1;
  }
  else
  {
    maior = num2;
  }
  return maior;
}

int main(void) {
  /*Escreva uma função chamada MAX( ) que recebe dois números inteiros e retorna o maior deles.*/

  int n1, n2;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  MAX(n1, n2);

  printf("O maior é %d", MAX(n1, n2));
  return 0;
}