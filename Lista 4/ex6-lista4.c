#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  /*Sorteie dois números de 1 a 10. Informe quantos destes números estão entre 3 e 7*/
  srand(time(NULL));
  int sort1 = rand() % 10 + 1;
  int sort2 = rand() % 10 + 1;

  printf("Os números foram %d e %d", sort1, sort2);

  if(sort1 >= 3 && sort1 <= 7 && sort2 >= 3 && sort2 <= 7)
  {
    printf("\nOs dois números estão entre 3 e 7");
  }
  else
  {
    if(sort1 >= 3 && sort1 <= 7 && sort2 != 3 && sort2 != 7 || sort1 != 3 && sort1 != 7 && sort2 >= 3 && sort2 <= 7)
    {
      printf("\nApenas um está entre 3 e 7");
    }
    else
    {
      printf("\nNenhum dos dois está entre 3 e 7");
    }
  }
  return 0;
}