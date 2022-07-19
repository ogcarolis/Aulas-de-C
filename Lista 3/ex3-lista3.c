#include <stdio.h>

int main(void) {
  //Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor  que 25 ou igual a 40.

  int n;

  printf("Digite o seu número: ");
  scanf("%d", &n);

  if(n > 80 || n < 25 || n == 40)
  {
    printf("Uma boa escolha de caminho.");
  }
  else
  {
    printf("Você está no caminho errado meu jovem...");
  }
  return 0;
}