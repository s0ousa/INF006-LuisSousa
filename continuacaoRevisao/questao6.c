/* 6)  Que leia e armazene os elemntos de uma matriz inteira (10,10) e imprima. depois troque os dados da segunda linha pela oitava. da quarta pela decima, a diagonal principal pela diagonal segundaria. */

#include <stdio.h>
#define TAM 10;

int matriz[TAM][TAM] = {{3,2,5,7,8,2,7,5,4,9},
                        {1,6,2,9,5,2,7,5,4,9},
                        {8,4,1,0,4,2,7,5,4,9},
                        {2,7,5,4,9,2,7,5,4,9},
                        {12,4,2,5,7,2,7,5,4,9}
                        {3,2,5,7,8,2,7,5,4,9},
                        {1,6,2,9,5,2,7,5,4,9},
                        {8,4,1,0,4,2,7,5,4,9},
                        {2,7,5,4,9,2,7,5,4,9},
                        {6,2,5,3,7,1,9,4,5,3},  
                        };



int j = 0;

while(j<TAM) {
  vetAux[j] = matriz[2][j]; 
  matriz[1][j] = matriz[7][j];
  matriz[7][j] = vetAux[j];


  vetAux[j] = matriz[3][j]; 
  matriz[4][j] = matriz[9][j];
  matriz[9][j] = vetAux[j];

  j++;  
}


for(int i = 0; i<TAM; i ++) {
  printf("")
}