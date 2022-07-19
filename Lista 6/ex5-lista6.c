#include <stdio.h>

int main(void) {
  /*Solicite que seja digitado um número múltiplo de 10 ou de 3*/

  int num;

  do {
    printf("Digite seu número: ");
    scanf("%d", &num);
  } while(!(num % 10 == 0 || num % 3 == 0));
  
  return 0;
}