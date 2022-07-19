#include <stdio.h>

int main(void) {
  /*Dado um número digitado pelo usuário, exiba o fatorial deste número. */

int numero;
int continha = 0;

printf("Digite o seu número: ");
scanf("%d", &numero);

for(int cont = numero; cont <= numero && cont > 0; cont--) 
  {
    if(cont == numero)
    {
      continha = numero * 1;
    }
    else
    {
      continha *= cont;
    }
  }
  
   printf("\nO fatorial desse número é: %d", continha);
  
  return 0;
}