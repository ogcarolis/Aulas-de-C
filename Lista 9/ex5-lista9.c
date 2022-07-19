#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Escreva o conteúdo do vetor do exercício anterior na tela, colocando cada valor ao lado do anterior (na mesma linha). Se o valor do vetor for múltiplo de 10, então insira uma quebra de linha.*/
  srand(time(NULL));
  int num[100];
  int sort;

  for(int i = 0; i < 100; i++)
    {
      sort = rand() % 100 + 1;
      num[i] = sort;
      printf("%d ", num[i]);

      if(num[i] % 10 == 0)
      {
        printf("\n");
      }
    }
    
  
  return 0;
}