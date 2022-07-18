#include <stdio.h>

int main(void) {
  int x;
  printf("Digite seu número: ");
  scanf("%d", &x);

  if ( x % 10 == 0)
  {
    printf("Seu número é múltiplo de 10!");
  }
  else
  {
    printf("Seu número não é múltiplo de 10 =(");
  }
  
}