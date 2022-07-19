#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /* Escreva um programa que joga par ou ímpar com o usuário.*/
  srand(time(NULL));
  int pcHandP = rand() % 10 + 1;
  int pcHandI = rand() % 10 + 1;
  int personHand, parOUimpar;

  printf("\tJogo de par ou ímpar!\n\n");

  printf("Escolha se quer ser par (0) ou ímpar(1): ");
  scanf("%d", &parOUimpar);

  if(parOUimpar == 0)
  {
    printf("Okay, você é par, então jogue um número de 1 a 10: ");
    scanf("%d", &personHand);
    printf("\nO computador jogou: %d", pcHandI);
    if ((pcHandI + personHand) % 2 == 0)
    {
      printf("\nParabéns, você ganhou!");
    }
    else
    {
      printf("\nPoxa, você perdeu =(");
    }
  }
  else
  {
    printf("Okay, você é ímpar, então jogue um número de 1 a 10: ");
    scanf("%d", &personHand);
    printf("\nO computador jogou: %d", pcHandP);
    if((pcHandP + personHand) % 2 == 1)
    {
      printf("\nParabéns, você ganhou!");
    }
    else
    {
      printf("\nPoxa, você perdeu =(");
    }
  }
    
  return 0;
}





  /* Isso aqui deixava o jogo previsível e chato.
  if(pcHandP % 2 == 1)
  {
    pcHandP = pcHandP + 1;
  }

  if(pcHandI % 2 == 0)
  {
    pcHandI = pcHandI + 1;
  }
  */
  