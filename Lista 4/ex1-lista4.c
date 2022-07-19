#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //Sorteie um número de 1 a 100 e informe se o número sorteado é par ou ímpar.
  srand(time(NULL));
  int sorteado = rand() % 100 + 1;

  printf("O número sorteado é: %d e ele é ", sorteado);

  if(sorteado % 2 == 0)
  {
    printf("par.");
  }
  else
  {
    printf("ímpar.");
  }
  
  return 0;
}