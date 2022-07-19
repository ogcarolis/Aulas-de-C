#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Adivinhe o número - Crie um programa que solicita um número ao usuário entre 1 e 10, sorteia um outro número dentro desta faixa de valores, e então diz se os dois números são iguais.
Faça um aprimoramente do programa anterior. Desta vez, seu programa deverá dar dicas, dizendo se o numero sorteado é maior ou menor, e permitir um novo palpite do usuário, ATÉ ELE ACERTAR. Mostrar quantas tentativas foram efetuadas (ele não irá sortear o número novamente).*/

  srand(time(NULL));
  int palpite;
  int sort = rand() % 10 + 1;
  int i = 0;
 
  do {
    printf("Tente acertar o número: ");
    scanf("%d", &palpite);

    if(palpite == sort)
    {
      
    }
    else 
      if(palpite > sort)
        {
          printf("O número que você chutou é maior que o sorteado\n");
        }
        else
        {
          printf("O número que você chutou é menor que o sorteado\n");
        }
   
    i++;
  } while (palpite != sort);

  printf("\n\nParabens acertou em %d tentativas!", i);
    
  return 0;
}