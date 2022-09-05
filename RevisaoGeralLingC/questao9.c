/* Criar programa que leia elementos de uma matriz inteira de 10x10 e escreva os elementos da diagonal principal */

#include <stdio.h> 
#define tam 5
void main() {
int matriz[10][10];
int l ;
int c ;

for(l = 0; l <tam ; l++) {
    
  for ( c = 0; c <tam; c++) {
        printf("Digite o valor da linha %i e coluna %i  \n", l , c);
        scanf("%i", &matriz[l][c]);

  }
}

for(int i = 0; i<tam; i++) {
  printf("%i", matriz[i][i]);
}
}
