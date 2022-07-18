#include <stdio.h>

int main(void) {
  int x;
  printf("Digite seu número: ");
  scanf("%d", &x);
  
  if (x % 2 == 0)
  {
    printf("Seu número é par!");
  }
  if (x % 2 == 1)
  {
    printf("Seu número é ímpar!");
  }  
}