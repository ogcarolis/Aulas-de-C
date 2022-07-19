#include <stdio.h>

int main(void) {
  /* Crie um vetor de caracteres de 10 posições. Insira 8 em todas as posições.*/

  int n[10];

  for(int i = 0; i < 10; i++)
    {
      n[i] = 8;
    }

  for(int i = 0; i < 10; i++)
    {
      printf("%d\n", n[i]);
    }
  return 0;
}