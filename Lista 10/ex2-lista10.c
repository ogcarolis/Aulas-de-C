#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Crie uma matriz 10x10 de números. Atribua um 0 (zero) a todos os elementos da matriz. Atribua então o número 8 a um elemento randômico da matriz. Exiba a matriz na tela.*/

  srand(time(NULL));
  int num[10][10];

  for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
        {
          num[i][j] = 0;
        }
    }

  int sort1 = rand() % 10;
  int sort2 = rand() % 10;

  num[sort1][sort2] = 8;

  for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
        {
          printf("%d ", num[i][j]);
        }
      printf("\n");
    }
  
  return 0;
}