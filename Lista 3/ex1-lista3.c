#include <stdio.h>

int main(void) {
  //Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).

  int n;

  printf("Digite o seu número: ");
  scanf("%d", &n);

  if (15 <= n && n <= 25 || 45 <= n && n <= 50)
  {
    printf("Erro! Não escolha esse número!");  
  }
  else
  {
    printf("Tudo certo por aqui! =)");
  }
  return 0;
}