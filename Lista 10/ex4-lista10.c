#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Utilizando a mesma matriz, exiba a soma dos elementos da diagonal principal.*/
  
  srand(time(NULL));
  int m[20][20];
  int continha = 0;
  

  for(int i = 0; i < 20; i++)
    {
      for(int j = 0; j < 20; j++)
        {
          int sort = rand() % 89 + 10;
          m[i][j] = sort;
          if(i == j)
          {
            continha += m[i][j];
          }
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

  printf("A soma dos números da diagonal é %d", continha);
  return 0;
}