#include <stdio.h>

int main(void) {
  //Escreva um programa solicita um numero que exibe a mensagem "SENAC" se este número for 13, 26, 42 ou 70.

  int n;
  printf("Digite seu número: ");
  scanf("%d", &n);

  if(n == 13 || n == 26 || n == 42 || n == 70 )
  {
    printf("SENAC");
  }
  else
  {
    printf("ERROU A SENHA!!");
  }
  return 0;
}