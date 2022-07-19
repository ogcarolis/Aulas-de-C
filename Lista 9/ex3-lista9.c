#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Crie um vetor de 100 posições, preencha com números aleatórios de 1 a 100. Exiba a média destes.*/
  srand(time(NULL));
  int num[100];
  int sort;
  float media = 0;
  float mediaTotal;

  for(int i = 0; i < 100; i++)
    {
      sort = rand() % 100 + 1;
      num[i] = sort;
      media += num[i];
    }

  mediaTotal = media / 100;

  printf("A média é %.2f", mediaTotal);
  
  
  return 0;
}