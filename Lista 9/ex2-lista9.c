#include <stdio.h>

int main(void) {
  /*Solicite 5 números. Exiba os que estão acima da média.*/
  int n[5];
  float media = 0;
  float mediaTotal;

  for (int i = 0; i < 5; i++) 
  {
    printf("Digite o seu número: ");
    scanf("%d", &n[i]);
    media += n[i];
  }

  mediaTotal = media / 5;

  for (int i = 0; i < 5; i++) 
  {
    if (n[i] > mediaTotal) 
    {
      printf("%d\n", n[i]);
    }
  }

  return 0;
}