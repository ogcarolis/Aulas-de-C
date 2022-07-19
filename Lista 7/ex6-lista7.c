#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
/*Escreva um programa que solicita 3 números de 1 a 60 ao usuário.
O programa então sorteará continuamente 3 números de 1 a 60 até que sejam sorteadas as 3 dezenas que foram digitadas pelo usuário. No final ele deve exibir quantos sorteios foram efetuados.*/

srand(time(NULL));
int palpite1, palpite2, palpite3;
int sort1, sort2, sort3;
int cont = 0;
  
printf("\n\tMini mega-sena de 1 a 60!\n");

printf("\nDigite seu palpite: ");
scanf("%d", &palpite1);

printf("Digite seu palpite: ");
scanf("%d", &palpite2);

printf("Digite seu palpite: ");
scanf("%d", &palpite3);

do
  {
    sort1 = rand() % 60 + 1;
    sort2 = rand() % 60 + 1;
    sort3 = rand() % 60 + 1;
    
    cont++;
  } while(!((palpite1 == sort1 || palpite1 == sort2 || palpite1 == sort3) && (palpite2 == sort1 || palpite2 == sort2 || palpite2 == sort3) && (palpite3 == sort1 || palpite3 == sort2 || palpite3 == sort3)));

  printf("\nVocê acertou em %d sorteios.", cont);
  return 0;
}