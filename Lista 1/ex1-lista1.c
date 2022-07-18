#include <stdio.h>

int main(void) {
  float p1, p2, nf;
  printf("\tNota do Semestre\n\n");
  printf("Digite a nota da P1: ");
  scanf("%f", &p1);

  printf("Digite a nota da P2: ");
  scanf("%f", &p2);
  
  nf = (p1 + p2) / 2;

  printf("\nSua nota final é: %.2f", nf);

}