#include <stdio.h>

int main(void) {
  /*Solicite um número e então diga se este é um número perfeito. */

  int num;
  int continha = 0;
  
  printf("Digite o seu número: ");
  scanf("%d", &num);

  for(int i = 1; i < num; i++)
    {
      if(num % i == 0)
      {
        printf("O número %d é divisor de %d\n", i, num);
        continha += i;
      }
    }

  if(continha == num) 
  {
    printf("O número %d é um número perfeito pois a soma de seus divisores foi %d", num, continha);  
  }
  else
  {
    printf("O número %d não é perfeito.", num);
  }
  
  return 0;
}