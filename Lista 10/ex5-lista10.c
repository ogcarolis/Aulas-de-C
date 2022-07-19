#include <stdio.h>

int main(void) {
  /*Crie uma matriz 10x10 e preencha com o número 0 em todas posições. Atribua o número 1 ao elemento 5,5.
Solicite que o usuário digite um dos seguintes comandos:
1 - cima, 2 - baixo, 3 - esquerda, 4 - direita, 5 - sair.
os comandos de direção fazem o número 1 se mover pela matriz. A cada movimento, a matriz é exibida novamente na tela.
O programa se repete até que seja digitada a opção 5 para sair.*/

  int caliope[10][10];
  int decisao; 
  int lin = 5; 
  int col = 5;

  for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
        {
          caliope[i][j] = 0;
        }
    }


  do {
    printf("1 - cima\n2 - baixo\n3 - esquerda\n4 - direita\n");
  
    printf("Digite o que deseja fazer: ");
    scanf("%d", &decisao);

    system("clear");
    
    switch(decisao)
    {
      case 1:
      caliope[lin][col] = 0;
      lin--;
      break;
      
      case 2: 
      caliope[lin][col] = 0;
      lin++;
      break;
      
      case 3:
      caliope[lin][col] = 0;
      col--;
      break;
      
      case 4:
      caliope[lin][col] = 0;
      col++;
      break;
    }

    caliope[lin][col] = 1;
    
    for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
        {
          printf("%d ", caliope[i][j]);
        }
      printf("\n");
    }
  } while(decisao != 0);
  
  
  return 0;
}