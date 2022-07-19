#include <stdio.h>

int main(void) {
  /*Crie uma matriz 3x3 de números inteiros, associe o valor 8 ao elemento central desta matriz. Exiba a matriz na tela de forma adequada.*/

  int x[3][3];
  
  for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          x[i][j] = 0;
        }
    }

  x[1][1] = 8;

  for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          printf("%d ", x[i][j]);
        }
      printf("\n");
    }
  return 0;
}