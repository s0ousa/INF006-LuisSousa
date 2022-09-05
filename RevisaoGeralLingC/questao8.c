#include <stdio.h>
#define MAX 20

int main () {
 
 // maior e menor 
 // percentual de num pares - numpares/20
 // media dos elementos - soma td/20
 
    int elementos[MAX];
    int qtdPares = 0;
    int somaTotal = 0;
    int maior, menor;
    
    for (int i =0;i<MAX;i++) {
        printf("Digite o valor da posição %i \n", i);
        scanf("%i", &elementos[i]);
        
        somaTotal+= elementos[i];
        
        if(elementos[i]%2==0) {
            qtdPares++;
        }
        
        
    }
    
    maior = elementos[0];
    menor = elementos[0];
    
    for (int j = 0; j<MAX; j++) {
        if(elementos[j]<menor) {
            menor = elementos[j];
        }
        
        if(elementos[j]>maior) {
            maior = elementos[j];
        }
    }
    
    
    float media = somaTotal/MAX;
    float percentPares = qtdPares/MAX;
    
    
    printf(" Maior valor : %i \n Menor valor : %i \n Percentual de pares : %f \n Média dos elementos: %f \n",maior,menor, percentPares,media);
}
