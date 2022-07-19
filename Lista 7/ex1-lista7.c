#include <stdio.h>

int main(void) {
  //Crie um programa que recebe 5 números inteiros e exiba o menor. 

  int numero;
  int recorde;

  for(int cont = 1; cont <= 5; cont++)
    {
      printf("Digite seu número: ");
      scanf("%d", &numero);

      if (numero < recorde || cont == 1)
      {
        recorde = numero;
      }  
    }

  printf("O número menor é: %d", recorde);
  return 0;
}