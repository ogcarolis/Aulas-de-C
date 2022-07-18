#include <stdio.h>

int main(void) {
  float ladoA, ladoB, p, a;
  printf("\tCalculando área e perímetro de retângulos!\n\n");

  printf("Digite o valor do lado a: ");
  scanf("%f", &ladoA);

  printf("Digite o valor do lado b: ");
  scanf("%f", &ladoB);

  p = ladoA * 2 + ladoB * 2;
  a = ladoA * ladoB;

  printf("\nA área do retângulo é: %f", a);
  printf("\nO perímetro do retângulo é: %f", p);
  
}