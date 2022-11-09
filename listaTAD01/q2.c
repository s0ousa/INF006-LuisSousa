#include <stdio.h>

/* Questão 2 Considere uma aplicação para armazenar os seguintes dados de uma pessoa em uma agenda de endereços:
nome, endereço e telefone. Especifique um TAD para armazenar os dados das pessoas e as operações
necessárias para inserir, consultar e excluir os dados das pessoas. */

typedef struct {
  char rua[30];
  int numero;
  char cidade[20];
  char estado[3];
}Endereco;

typedef struct {
  char nome[30];
  char endereco[60];
  char telefone[13]; 
}Pessoa;

void inserirEndereco();
void inserir();
void consultar() ;
void limpaString(char string[]);
void limpaEndereco(Endereco endereco);
void excluir();



void main() {
  
    Pessoa usuario;
    
    int opcao = -1; ;
    while(opcao!=4) {
      puts("[1] Inserir");
      puts("[2] Consultar");
      puts("[3] Remover");
      puts("[4] Sair"); 

      scanf("%i", &opcao);
      
    switch (opcao){
     case 1:
        inserir();
      break;
  
    case 2:
       consultar();
     break;
  
    case 3:
      excluir();
    break;
  
    }  
  }
}

  
/* void inserirEndereco(Pessoa usuario) {
  puts("Digite a rua");
  fgets(usuario.endereco.rua,30,stdin);
  getchar();
  
  puts("Digite o numero da casa");
  scanf("%i", usuario.endereco.numero);
  getchar();
  
  puts("Digite a cidade");
  fgets(usuario.endereco.cidade,20,stdin);
  getchar();
  
  puts("Digite o estado (em sigla Ex: BA, SP)");
  fgets(usuario.endereco.estado,3,stdin);
  getchar();
}
*/

void inserir(Pessoa usuario) {

  int opcao ;
  puts("O que você deseja inserir?");
  puts("[1] Nome");
  puts("[2] Endereço");
  puts("[3] Telefone");

  scanf("%i", &opcao);
  switch(opcao) {
    case 1:
      puts("Digite o nome que você deseja inserir");
      scanf("%s", &usuario.nome);
      getchar();
    break;

    case 2:
   //   inserirEndereco(usuario);
      puts("Digite o endereco que você deseja inserir");
      scanf("%s",usuario.endereco);
      getchar();
    break;

    case 3:
       puts("Digite o numero que você deseja inserir");
       scanf("%s", &usuario.telefone);
       getchar();
    break;
  }
}


void consultar(Pessoa usuario) {
  int opcao ;
  puts("O que você deseja consultar?");
  puts( "[1] Nome");
  puts("[2] Endereço");
  puts("[3] Telefone");

  scanf("%i", &opcao);
  
  switch(opcao) {
    case 1:
      puts(usuario.nome);
    break;

    case 2:
      printf("%s\n" , usuario.endereco);
    break;

    case 3:
      printf("%s\n" , usuario.telefone);
    break;
  }
}

void limpaString(char string[]) {
  for(int i = 0; string[i]!= "\0";i++) {
    string[i] =" ";
  }
}

/* void limpaEndereco(Endereco endereco) {
  limpaString(endereco.rua);
  limpaString(endereco.cidade);
  limpaString(endereco.estado);
  endereco.numero = 0;
} */


void excluir(Pessoa usuario) {

  int opcao;
  puts("O que você deseja excluir?");
  puts("[1] Nome");
  puts("[2] Endereço");
  puts("[3] Telefone");

  scanf("%i", &opcao);
  
  switch(opcao) {
    case 1:
      limpaString(usuario.nome);
    break;

    case 2:
    //  limpaEndereco(usuario.endereco);
    break;

    case 3:
        for(int i = 0; usuario.telefone[i]!='\0';i++) {
           usuario.telefone[i] = 0;   
        }
       
    break;
  }
}
