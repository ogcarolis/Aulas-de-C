#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Escreva um programa que sorteia 10 números pares entre 1 e 100 e exibe na tela. (como garantir que o sorteio exiba apenas números pares?)*/

  srand(time(NULL));
  int s;

  printf("Sorteador de números");

  for (int cont = 1; cont <= 10; cont++)
    {
      do
        {
          s = rand() % 100 + 1;
        }
      while (s % 2 != 0);  

      printf("\nO número foi: %d", s); 
     
    }
  
  return 0;
}