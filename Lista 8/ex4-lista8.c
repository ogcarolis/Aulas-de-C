#include <stdio.h>

float conversor(float temperatura)
{
  float fahr;
  fahr = (temperatura * 9/5) + 32;

  return fahr;
}

int main(void) {
/*Escreva uma função que recebe um valor float de temperatura em Celsius, e fará a conversão da temperatura informada de Celsius para Fahrenheit.*/
  
  float temperatura;

  printf("Digite sua temperatura em Celsius: ");
  scanf("%f", &temperatura);

  conversor(temperatura);

  printf("Sua temperatura em Fahrenheit é: %.2f", conversor(temperatura));
  return 0;
}