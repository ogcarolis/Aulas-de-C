#include <stdio.h>

int main(void) {
/*Escreva um programa que solicita 5 números ao usuário, e para cada número digitado, informa se este é par ou ímpar.*/

  int numero;
  int cont = 1;

  while(cont <= 5)
    {
      printf("Digite o seu número: ");
      scanf("%d", &numero);
      cont++;

      if (numero % 2 == 0)
      {
        printf("Seu número é par.\n");
      }
      else
      {
        printf("Seu número é ímpar.\n");
      }
    }
    
  return 0;
}