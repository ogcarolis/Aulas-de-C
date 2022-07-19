#include <stdio.h>

int main(void) {
  /*Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo. 
Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.*/

  int a, b, c;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  
  printf("Digite o terceiro valor: ");
  scanf("%d", &c);

  if(a + b > c && b + c > a && c + a > b)
  {
    if(a == b && a == c && c == b)
    {
      printf("É um triângulo equilátero.");
    }
    if(a != b && a != c && b != c)
    {
      printf("É um triângulo escaleno. ");
      
      if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
      {
        printf("E ele é também um triângulo retângulo.");
      }
    }
    if(a == b || a == c || c == b)
    {
      printf("É um triângulo isóceles.");
    }
  }
  else
  {
    printf("Não é um triângulo.");
  }
  return 0;
}