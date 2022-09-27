/*8) Que deixe entrar com valores de uma matriz de ordem cinco e verificar se ela é ou nao uma matriz triangular superior.
P.S. Matriz triangular superior é uma matriz onde todos elementos de posições L<C são diferentes de 0 e todos os elementos de L>C são iguais a 0. */
#include <stdio.h>
#define TAM 5 

void main() {
  /*int matriz[5][5] = {{3,2,5,7,8},
                    {0,6,2,9,5},
                    {0,0,1,0,4},
                    {0,0,0,4,9},
                    {0,0,0,0,7}};

  */

  int matriz[TAM][TAM];

  for(int l = 0; l <TAM; l++) {
        for(int c = 0; c <TAM; c++) {
            printf("Digite o valor da linha %i, coluna %i\n", l,c);
            scanf("%i", &matriz[l][c]);
        }
    }  
  
  int ehTriang = 0;
  int limiteColuna = 1;
    for(int l = 1; l<TAM;l++) {
        if(limiteColuna<=TAM-1) {
            for(int c = 0; c<limiteColuna;c++) {
                if(matriz[l][c]!=0){
                  ehTriang = -1;
                }
             }
       
            limiteColuna++;
        }
      }
      if(ehTriang <0) {
        puts("Não é triangular superior");
      } else {
        puts("É triangular superior");
      }
}