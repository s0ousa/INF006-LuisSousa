/*7.
Criar programa que leia dois conjuntos de números inteiros, tendo cada
um 10 e 20 elementos e apresente os elementos comuns aos conjuntos.
lembre-se de que os elementos podem se repetir mas não podem aparecer
repetidos na saída
 */

#define dez 10
#define vinte 20 
#include <stdio.h>

void main(){
  int vetorDez[dez];
  int vetorVinte[vinte];
  int saida[dez];

  for(int i = 0;i<vinte;i++) {
    printf("Digite o %i valor do vetor de vinte elementos \n", i+1);
    scanf("%i",&vetorVinte[i]);
    
  }

   for(int i = 0;i<dez;i++) {
    printf("Digite o %i valor do vetor de dez elementos \n", i+1);
    scanf("%i",&vetorDez[i]);
    
  }

  
  int contaSaida = 0;
  for(int i = 0;i<vinte;i++){
    int atualVinte = vetorVinte[i];
    for(int j= 0;j<dez;j++) {
      int atualDez = vetorDez[j];
      
      if(atualVinte == atualDez){
        saida[contaSaida] = atualVinte;
        contaSaida++;
      }
    }
  }

  for(int i = 0; i<dez;i++) {
    for(int j = i+1; j<dez; j++) {
      if(saida[i]==saida[j]) {
        saida[i] = 0;
      }
    }
  }
  
 
   for(int i = 0;i<dez;i++) {
     if(saida[i]!= 0) {
        printf("%i ", saida[i]);  
     }
     
   }
}
