#include <stdio.h>

int main(void) {
  float raio, a;

  printf("\tÁrea de uma circunferência\n");

  printf("\nDigite o valor do raio: ");
  scanf("%f", &raio);

  a = 3.14 * raio * raio;

  printf("O valor da área dessa circunferência é: %f", a);  
}