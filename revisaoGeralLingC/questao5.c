#include <stdio.h>
#define MAX 256

int main () {
 
    char nome[MAX];
    char nomes[MAX];
    int contNomes = 0;
    int contNome = 0;
    int idade;
    
    
 
    for(int i =0 ; i<20; i++) {
        
        printf("Digite seu nome \n");
        fgets(nome,MAX, stdin); 
    
        printf("Digite a idade \n");
        scanf("%i", &idade);
        getchar(); 
         
        if (nome[0]>=76 && nome[0] <=83) // L- S maiusculas em ASCII 
        {
            
            for(contNome=0;nome[contNome]!='\0';contNome++) {
                nomes[contNomes] = nome[contNome];
                contNomes++;
            }
           
            
        }
    }
     
    printf("==== Saída === \n");
     
    for(int j = 0; j<contNomes; j++) {
        printf("%c", nomes[j]);
    }    
   
}

