#include <stdio.h>

int main(void) {
/*Escreva um programa que solicita 10 números e ao final exibe a soma de todos eles.*/

  int cont = 1;
  int numero;
  int continha = 0;

  while (cont <= 10)
    {
      printf("Digite seu número: ");
      scanf("%d", &numero);
      continha += numero;
      cont++;
    }

  printf("O resultado é: %d", continha);
  
  return 0;
}