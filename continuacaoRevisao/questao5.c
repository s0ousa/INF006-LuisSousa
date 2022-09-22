#include <stdio.h>
#define TAM 10 

//5) Que leia os elemntos de uma matriz 10x10 
//e mostre somente os elementos abaixo da diagonal;


void main() {

/* int matriz[5][5] = {{3,2,5,7,8},
                    {1,6,2,9,5},
                    {8,4,1,0,4},
                    {2,7,5,4,9},
                    {12,4,2,5,7}};
*/
    int matriz[TAM][TAM];

    for(int l = 0; l <TAM; l++) {
        for(int c = 0; c <TAM; c++) {
            printf("Digite o valor da linha %i, coluna %i\n", l,c);
            scanf("%i", &matriz[l][c]);
        }
    }  

    int limiteColuna = 1;
    for(int l = 1; l<TAM;l++) {
        if(limiteColuna<=TAM-1) {
            for(int c = 0; c<limiteColuna;c++) {
                printf("%i ", matriz[l][c]);
             }
       
            limiteColuna++;
        }
        

        printf("\n");
    }

}