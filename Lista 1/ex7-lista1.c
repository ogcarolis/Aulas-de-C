#include <stdio.h>

int main(void) {
  int n, conta;

  printf("\tNúmeros 0 e 1!!\n\n");

  printf("Digite o número que deseja: ");
  scanf("%d", &n);

  conta = n % 2;

  printf("O seu número é: %d", conta);
    
}