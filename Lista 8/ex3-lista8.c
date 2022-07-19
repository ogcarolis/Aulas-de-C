#include <stdio.h>

int EhPrimo(int num)
{
  int EhOuNao = 1;
  for(int cont = 2; cont < num; cont++)
    {
      if(num % cont == 0)
      {
        EhOuNao = 0;
      }
    }
  return EhOuNao;
}

int main(void) {
  /*Escreva uma função chamada EhPrimo, que recebe um número inteiro e retorna 1 se ele for um número primo, ou zero caso contrário.*/

  int numero;
  
  printf("Digite o seu número: ");
  scanf("%d", &numero);

  EhPrimo(numero);

  printf("%d", EhPrimo(numero));
  return 0;
}