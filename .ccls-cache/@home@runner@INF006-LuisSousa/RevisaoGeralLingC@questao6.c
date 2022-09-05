/* 6. Armazenar nomes e nota 1, 2, de 15 alunos. calcular e armazenar a media.
armazenar tambem a situação do aluno: AP ou RP. imprimir uma listagem
contendo nome, notas, media e a situação de cada aluno. */

#include <stdio.h>
#define tam 5


typedef struct {
  float nota1;
  float nota2;
  float media;
  char[3] situacao;
}Aluno;

void main(){
  Aluno alunos[tam];

  for(int i = 0; i<tam;i++) {
   
      printf("Digite a nota 1 do %i aluno", i+1);
      scanf("%f", &alunos[i].nota1);
        
  }

   for(int i = 0; i<tam;i++) {
   
      printf("Digite a nota 2 do %i aluno", i+1);
      scanf("%f", &alunos[i].nota2);
        
  }

  for(int i = 0; i<tam; i++) {
    
  }
}