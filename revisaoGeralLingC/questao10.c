/* Criar programa que leia e armazena os elementos de uma matriz M inteira
10x10 e imprima todos os elementos que estão em linhas pares e colunas
impares. */

#include <stdio.h> 
#define tam 6
void main() {
  int matriz[tam][tam];
  int l ;
  int c ;

  for(l = 0; l <tam ; l++) {
      
    for ( c = 0; c <tam; c++) {
          printf("Digite o valor da linha %i e coluna %i  \n", l , c);
          scanf("%i", &matriz[l][c]);
  
    }   
  }


  printf("Saida: \n");
  int i = 1 ;
  int j= 0 ;
  for (i = 1; i < tam; i+=2 ) {
    printf("%i \n", matriz[i][j]);
    j+=2;
  }
}

