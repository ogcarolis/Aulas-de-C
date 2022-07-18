#include <stdio.h>

int main(void) {
float a, b, c, delta;

printf("\nCalcular o Delta de Bhaskara\n\n");

printf("Digite aqui o valor de A: ");
scanf("%f", &a);

printf("Digite aqui o valor de B: ");
scanf("%f", &b);

printf("Digite aqui o valor de C: ");
scanf("%f", &c);

delta = b * b -4 * a * c;

printf("\nO valor de delta é: %.2f", delta);
  
}