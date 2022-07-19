#include <stdio.h>

float menorNumero(float num1, float num2)
{
  float menor;
  if(num1 < num2)
  {
    menor = num1;
  }
  else
  {
    menor = num2;
  }
  return menor;
}

int main(void) {
  /*Escreva uma função que recebe dois valores int e um float, e retorna o menor deles.*/
  int valor1;
  float valor2;

  printf("Digite o valor inteiro: ");
  scanf("%d", &valor1);

  printf("Digite o valor flutuante: ");
  scanf("%f", &valor2);

  menorNumero(valor1, valor2);

  printf("O menor número deles é %.2f", menorNumero(valor1, valor2));

  return 0;
}