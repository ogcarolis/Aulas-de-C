#include <stdio.h>

int main(void) {
  float km, l, qtdt;

  printf("\tGasto de gasolina por quilometro!\n\n");

  printf("Digite quantos litros de gasolina tinham no carro: ");
  scanf("%f", &l);

  printf("Digite quantos quilômetros foram percorridos: ");
  scanf("%f", &km);

  qtdt = km / l;

  printf("\nO gasto de gasolina do seu carro foi %f km/l", qtdt);
}