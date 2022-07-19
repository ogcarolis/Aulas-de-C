#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Sorteie dois números de 1 a 5 e peça que o usuário acerte os dois números, não necessariamente na mesma ordem.*/

  srand(time(NULL));
  int sort1 = rand() % 5 + 1;
  int sort2 = rand() % 5 + 1;
  int n1, n2;

  printf("Digite um dos números que acha que caiu: ");
  scanf("%d", &n1);

  printf("Digite outro dos números que acha que caiu: ");
  scanf("%d", &n2);

  if(n1 == sort1 && n2 == sort2 || n1 == sort2 && n2 == sort1)
  {
    printf("Parabéns, acertou!");
  }
  else
  {
    printf("Poxa errou em, os números eram %d e %d", sort1, sort2);
  }
  return 0;
}