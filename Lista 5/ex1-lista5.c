#include <stdio.h>

int main(void) {
/*Escreva um programa que exibe o quadrado de todos os números de 1 a 20.*/
  int cont = 1;

  while (cont <= 20)
    {
      printf("%d = %d\n", cont, cont * cont);
      cont++;
    }
  
  return 0;
}