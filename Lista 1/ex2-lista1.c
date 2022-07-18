#include <stdio.h>

int main(void) {
  int H, M, VT;
  printf("\tCalcule o valor arrecadado das entradas na festa de hoje\n\n");

  printf("Digite a quantidade de homens que estiveram na festa: ");
  scanf("%d", &H);

  printf("Digite a quantidade de mulheres que estiveram na festa: ");
  scanf("%d", &M);

  VT = H * 20 + M * 17;

  printf("\nO valor total ganho foi de: R$%d", VT);
}