#include <stdio.h>

int main(void) {
/*Escreva um programa que solicita um número ao usuário, e então exibe todos os seus divisores.*/

  int cont;
  int numero;

  printf("Digite o seu número: ");
  scanf("%d", &numero);
  cont = numero;

  while(cont != 0)
    {
      if(numero % cont == 0)
      {
        printf("%d é divisivel por %d\n", numero, cont);
      }
      cont--;
    }
  return 0;
}