#include <stdio.h>
#include <stdbool.h>

int main(void) {
  /*Elabore um programa que solicita um número e então diz se este número é primo.*/

  int num;
  bool salvar = true;

  printf("Digite seu número: ");
  scanf("%d", &num);

  for(int i = 2; i < num; i++)
    {
      if(num % i == 0)
      {
        printf("\t%d é divisor de %d\n", i, num);
        salvar = false;
      }
    }

  if(salvar == false)
  {
    printf("O número %d não é primo.", num);
  }
  else
  {
    printf("O número %d é primo.", num);
  }
  return 0;
}