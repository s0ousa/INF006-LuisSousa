#include <stdio.h>
#define TAM 10

void leValores(int vetorAtual[TAM]) {
    for(int i = 0; i<TAM; i++) {
    printf("Digite o %i valor do vetor atual. \n", i+1);
    scanf("%d", &vetorAtual[i]);
}
}

void printaVetor(int vetorAtual[TAM]) {
    for(int i = 0; i <TAM; i ++) {
            printf("%d ", vetorAtual[i]);
        }
    printf("\n");    

}

void main() {

int vetor1 [TAM];
int vetor2 [TAM];
int vetorAdd[TAM];
int vetorSub[TAM];
int vetorMult[TAM];
int vetorDiv[TAM];

printf("==Preenchendo o primeiro vetor...==\n ");
leValores(vetor1);


printf("==Preenchendo o segundo vetor...== \n");
leValores(vetor2);


for(int i = 0; i <TAM; i ++) {

    vetorMult[i] = vetor1[i]*vetor2[i];
    vetorAdd[i] = vetor1[i]+vetor2[i];
    vetorSub[i] = vetor1[i]-vetor2[i];
    vetorDiv[i] = (vetor1[i]/vetor2[i]);

}

printf("=== Vetor adição ===\n");
printaVetor(vetorAdd);

printf("=== Vetor subtração === \n");
printaVetor(vetorSub);

printf("=== Vetor multi ===\n");
printaVetor(vetorMult);

printf("=== Vetor Divisao ===\n");
printaVetor(vetorDiv);

}
