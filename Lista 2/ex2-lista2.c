#include <stdio.h>

int main(void) {
  int x, y;

  printf("Digite o primeiro número: ");
  scanf("%d", &x);

  printf("Digite o segundo número: ");
  scanf("%d", &y);

  if(x > y)
  {
    printf("O primeiro número é o maior.");    
  }
  else
  {
    if (x < y)      
    {
      printf("O segundo número é o maior.");
    }
  }
    if(x == y)
    {
      printf ("Os números são iguais!");
    }
}
  