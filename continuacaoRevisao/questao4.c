#include <stdio.h>
#define TAM 10

/* 4) Que armazene 10 numeros em um vetor.
Na entrada de dados, o numero ja deve ser armazenado na sua posição definitiva em ordem decrescente. 
imprimir o vetor logo apos a entrada de dados*/

void main() {

    float vetor[TAM];
    float valorAtual,ultimoValor;

    printf("Digite o primeiro valor do vetor. \n");
    scanf("%f", &vetor[TAM-1]);
    ultimoValor = vetor[TAM-1];

    for(int i = TAM-2; i>=0;i--) {
        printf("Digite o proximo valor do vetor. \n");
        scanf("%f", &valorAtual);
        
        while(valorAtual>=ultimoValor) {
            puts("Digite um numero menor que o ultimo valor");
            scanf("%f", &valorAtual);
        }
        
            vetor[i] = valorAtual;
            ultimoValor= valorAtual;

    }

     for(int i = 0; i <TAM; i ++) {
            printf("%.2f", vetor[i]);
        }
}


