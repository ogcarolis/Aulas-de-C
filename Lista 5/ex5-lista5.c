#include <stdio.h>

int main(void) {
/*Escreva um programa que exibe a soma dos números de 1 a 100*/

  int cont = 1;
  int continha = 0;

  while (cont <= 100)
    {
      continha += cont;
      cont++;
    }
  printf("%d", continha);
  
  return 0;
}