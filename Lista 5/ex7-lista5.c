#include <stdio.h>

int main(void) {
/*Solicite que o usuário digite um número entre 10 e 20. Se for digitado um numero inválido, peça novamente, até que ele digite um número correto.*/

  int numero;
  
    printf("Digite o número: ");
    scanf("%d", &numero);

  while(numero < 10 || numero > 20)
    {
      printf("Errado! Digite o número: ");
      scanf("%d", &numero);
    }
  
  printf("Certinho ;)");
  return 0;
}