/* 6. Armazenar nomes e nota 1, 2, de 15 alunos. calcular e armazenar a media.
armazenar tambem a situação do aluno: AP ou RP. imprimir uma listagem
contendo nome, notas, media e a situação de cada aluno. */

#include <stdio.h>
#define tam 5

typedef struct {
  float nota1;
  float nota2;
  float media;
  char situacao[3];
  char nome;
}Aluno;


void main(){
 
  Aluno vetorAlunos[tam];

  for(int i = 0 ; i<tam; i++) {
    printf("Digite o Nome do %i aluno", i+1);
    fgets(vetorAlunos[i].nome,20, stdin);

    printf("Digite a primeira nota do %i aluno", i+1);
    scanf("%f" , &vetorAlunos[i].nota1);

    printf("Digite a segunda nota do %i aluno", i+1);
    scanf("%f" , &vetorAlunos[i].nota2);

    vetorAlunos[i].media = (vetorAlunos[i].nota2+ vetorAlunos[i].nota1)/2;
    if(vetorAlunos[i].media>5) {
      vetorAlunos[i].situacao[0] = 'A';
      
    } else {
      vetorAlunos[i].situacao[0] = 'R';
    }

  }

  printf("===== ALUNOS ====== \n");


  for(int j = 0; j<tam; j++) {
    
    printf("Nome : ");
    puts(vetorAlunos[j].nome);

    printf("Situação : ");
    puts(vetorAlunos[j].nome);

    printf("Nota 1 : %f , Nota 2: %f \n", &vetorAlunos[j].nota1, &vetorAlunos[j].nota2);
    printf("Média : %f \n ", vetorAlunos[j].media);
    
    }
}