#include <stdio.h>

int main(void) {
  /*Escreva um programa que solicita a altura de 5 atletas. Ao final da entrada de dados, informe A ALTURA do atleta mais alto. */

  int altura[5];
  int recorde = 0;

  for (int i = 0; i < 5; i++) {
    printf("Digite a altura do atleta: ");
    scanf("%d", &altura[i]);

    if(altura[i] > recorde)
    {
      recorde = altura[i];
    }
  }

  printf("O mais alto é %d", recorde);
  

  return 0;
}