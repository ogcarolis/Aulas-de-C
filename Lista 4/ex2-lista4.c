#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Escreva um programa que sorteia um número de 1 a 10 e dá duas chances para que o usuário acerte. Caso ele erre a primeira, o sistema permite que ele tente de novo. Não deve ser sorteado um novo número.*/
  
  srand(time(NULL));
  int sorteado = rand() % 10 + 1;
  int n1, n2;

  printf("\tJogo de tentar acertar o número (1-10)!\n\n");

  printf("Digite um número: ");
  scanf("%d", &n1);

  if(n1 == sorteado)
  {
    printf("Parabéns!! Acertou de primeira ;)");
  }
  else
  {
    printf("Putz, não foi de primeira, tente novamente: ");
    scanf("%d", &n2);
    if(n2 == sorteado)
    {
      printf("Parabéns, demorou mas conseguiu!");
    }
    else
    {
      printf("Poxa, o número era %d, mas pelo menos tentou :/", sorteado);
    }
  }
  
  return 0;
}