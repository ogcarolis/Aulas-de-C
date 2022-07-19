#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Crie e preencha o mesmo vetor de 100 números. Calcule a soma de todos que são menores que a média dos 10 últimos.*/
  srand(time(NULL));
  int num[100];
  int sort, menorque, valorTotal;
  float somaValores = 0;
  float mediaTotal;

  for(int i = 0; i < 100; i++)
    {
      sort = rand() % 100 + 1;
      num[i] = sort;
    }

  for(int i = 90; i < 100; i++)
    {
      somaValores += num[i];
    }
  
  mediaTotal = somaValores / 10;

  for(int i = 0; i < 100; i++)
      {
        if(num[i] < mediaTotal)
        {
          valorTotal += num[i];
        }
      }

  printf("A soma é: %d", valorTotal);
    
  
  return 0;
}