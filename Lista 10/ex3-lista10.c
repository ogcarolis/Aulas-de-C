#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Crie uma matriz 20 x 20 de inteiros. Preencha com números aleatórios entre 10 e 99. Exiba então a soma dos valores de todas as linhas desta matriz, e informe qual linha possui o maior valor.*/

  srand(time(NULL));
  int m[20][20];

  int continha[20];

  for(int i = 0; i < 20; i++)
    {
      continha[i] = 0;      
    }
  

  for(int i = 0; i < 20; i++)
    {
      for(int j = 0; j < 20; j++)
        {
          int sort = rand() % 89 + 10;
          m[i][j] = sort;
          continha[i] += m[i][j];
        }
    }

  for(int i = 0; i < 20; i++)
    {
      for(int j = 0; j < 20; j++)
        {
          printf("%d ", m[i][j]);
        }
      printf("\n");
    }

  printf("\n");
  
   for(int i = 0; i < 20; i++)
    {
      printf("A soma da linha %d é %d\n", i, continha[i]);
    }
  return 0;
}