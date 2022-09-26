/*3) Que  entre com dados num vetor VET do tipo inteiro com 20 oisiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos. */

#include <stdio.h> 
#define TAM 20

void main() {
  int vetEntrada [TAM];
  int vet1[TAM];

  for(int i = 0; i<TAM; i++) {
    printf("Digite a posicao %i do vetor \n", i );
    scanf("%i", &vetEntrada[i]);

  }

  
  int aux;
  for (int i = 0; i<TAM; i++) {
    for (int j = i+1; j<TAM; j++) {
      if(vetEntrada[i]>vetEntrada[j]) {
        aux = vetEntrada[j];
        vetEntrada[j] = vetEntrada[i];
        vetEntrada[i] = aux ;
      }
    }
  }

  int contadorVet1 = 0;
  for (int i = 0; i<TAM; i++) {
      if(vetEntrada[i] != vetEntrada[i+1]) {
        vet1[contadorVet1] = vetEntrada[i];
        contadorVet1++;
      }
    }
  

  for (int i = 0; i<contadorVet1; i++) {
    printf("%i ", vet1[i]);
  }
}