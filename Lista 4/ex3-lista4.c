#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Escreva um programa que sorteia um número de 1 a 10, dá duas chances para que o usuário acerte, como o anterior, mas informa se o número sorteado é maior ou menor que o primeiro palpite.*/
  
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
    if(n1 < sorteado)
    {
      printf("O seu número foi menor que o número que caiu, mas ainda há uma chance!");
    }
    else
    {
      printf("O seu número foi maior que o número que caiu, mas ainda há uma chance!");
    }
    printf("\nTente novamente: ");
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