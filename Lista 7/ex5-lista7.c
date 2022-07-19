#include <stdio.h>

int main(void) {
  /*Escreva um programa que gera a seguinte sequência de caracteres na tela, utilizando repetições:
*
**
***
****
*****   tem 5 linhas*/

int altura;

  printf("Dê o número de linhas: ");
  scanf("%d", &altura);

for(int cont = 1; cont <= altura; cont++)
  {
    printf("\n");
    
    //tem que aumentar um por linha
    for(int cont2 = 1; cont2 <= cont; cont2++)
      {
        printf("*");
      }
  }


  
  return 0;
}