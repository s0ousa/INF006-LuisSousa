/* Criar e armazenar ua matriz a 10x10 e gerar e imprimir a matriz invertida */

#include <stdio.h> 
#define tam 4
void main() {
  int matriz[tam][tam];
  int invertida[tam][tam];
  int l ;
  int c ;

  for(l = 0; l <tam ; l++) {
      
    for ( c = 0; c <tam; c++) {
          printf("Digite o valor da linha %i e coluna %i  \n", l , c);
          scanf("%i", &matriz[l][c]);
  
    }   
  }

  int auxi = tam-1;
  
  
  for(int i = 0; i<tam ; i++) {
    int auxj = tam-1;
    for(int j = 0 ; j<tam ; j++, auxj--) {
      invertida[i][j] = matriz[auxi][auxj];
    }
    
    auxi--;
  }

  l = 0;
  c = 0;
  for(l ; l <tam ; l++) {
    printf ("\n ");
    for ( c ; c <tam; c++) {
          printf("%i ", invertida[l][c]);

    }   
  }
  
}