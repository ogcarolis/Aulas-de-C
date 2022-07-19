#include <stdio.h>

int main(void) {
  //Crie um programa que recebe números inteiros até que o usuário digite 0 e então exiba o maior e o menor. 

  int numero, menorRecorde, maiorRecorde;
  int cont = 1;

  do 
  {
    printf("Digite o seu número: ");
    scanf("%d", &numero);

    if ((numero < menorRecorde || cont == 1) && numero != 0) 
    {
      menorRecorde = numero;
    }

    if (numero > maiorRecorde || cont == 1)
    {
      maiorRecorde = numero;
    }
    
    cont++;
  }
  while (numero != 0);

  printf("O menor número é %d e o maior é %d", menorRecorde, maiorRecorde);
  
  return 0;
}