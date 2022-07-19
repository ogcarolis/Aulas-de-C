#include <stdio.h>

int main(void) {
  /*Escreva um programa que solicita o código e a altura de 5 atletas. Ao final da entrada de dados, informe O CÓDIGO do atleta mais alto.*/
  
  int altura[5];
  int recorde, subs;
  int codigo[5];
  

  for (int i = 0; i < 5; i++) {
    printf("Digite a altura do atleta %d: ", i+1);
    scanf("%d", &altura[i]);

    printf("Digite o código do atleta %d: ", i+1);
    scanf("%d", &codigo[i]);

    if(altura[i] > subs || i == 0)
    {
      subs = altura[i];
      altura[i] = codigo[i];
      recorde = altura[i];
    }
  }

  printf("O mais alto é %d", recorde);
  

  return 0;
}
