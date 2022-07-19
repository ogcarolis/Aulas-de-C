#include <stdio.h>

int main(void) {
/*Escreva um programa que exibe qualquer tabuada completa. O programa deve perguntar ao usuário qual tabuada ele deseja visualizar, que irá responder digitando um número de 1 a 10.*/

  int numero;
  int cont = 1;

  printf("Digite o seu número: ");
  scanf("%d", &numero);

  while (cont <= 10)
    {
      printf("%d x %d = %d\n", numero, cont, numero * cont);
      cont++;
    }
  
  return 0;
}