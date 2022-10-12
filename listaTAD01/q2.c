#include <stdio.h>

/* Questão 2 Considere uma aplicação para armazenar os seguintes dados de uma pessoa em uma agenda de endereços:
nome, endereço e telefone. Especifique um TAD para armazenar os dados das pessoas e as operações
necessárias para inserir, consultar e excluir os dados das pessoas. */

typedef struct {
  char rua[50];
  int numero;
  char cidade[20];
  char estado[20];
}Endereco;

typedef struct {
  char nome[30];
  Endereco endereco;
  int telefone[]; 
}Pessoa;

void inserirEndereco();
void inserir();
void consultar() ;
void limpaString(char string[]);
void limpaEndereco(Endereco endereco);
void excluir();
void print


void main() {
  
  Pessoa usuario;
  
  int opcao = -1; ;
  while(opcao!=4) {
    puts("[1] Inserir");
    puts("[2] Consultar");
    puts("[3] Remover");
    puts("[4] Sair"); 
  
  switch (opcao)
{
   case 1:
      inserir();
    break;

  case 2:
     consultar();
   break;

  case 3:
    remover();
  break;

}  

}

  
void inserirEndereco() {
  puts("Digite a rua");
  scanf("%s", &usuario.endereco.rua);

  puts("Digite o numero da casa");
  scanf("%i", &usuario.endereco.numero);

  puts("Digite a cidade");
  scanf("%s", &usuario.endereco.cidade);

  puts("Digite o estado");
  scanf("%s", &usuario.endereco.estado);

}


void inserir() {

  int opcao ;
  puts("O que você deseja inserir?");
  puts("[1] Nome");
  put("[2] Endereço");
  puts("[3] Telefone");
  switch(opcao) {
    case 1:
      puts("Digite o nome que você deseja inserir");
      scanf("%s", usuario.nome);
    break;

    case 2:
      inserirEndereco();
    break;

    case 3:
       puts("Digite o nome que você deseja inserir");
      scanf("%i", usuario.telefone);
    break;
  }
}


void consultar() {
  int opcao ;
  puts("O que você deseja consultar?");
  puts( "[1] Nome");
  puts("[2] Endereço");
  puts("[3] Telefone");
  
  switch(opcao) {
    case 1:
      puts(usuario.nome);
    break;

    case 2:
     // puts(usuario.endereco);
    break;

    case 3:
      printf("%i\n" , usuario.telefone);
    break;
  }
}

void limpaString(char string[]) {
  for(int i = 0; string[i]!= "\0";i++) {
    string[i] =" ";
  }
}

void limpaEndereco(Endereco endereco) {
  limpaString(endereco.rua);
  limpaString(endereco.cidade);
  limpaString(endereco.estado);
  endereco.numero = 0;
}


void excluir() {

  int opcao;
  puts("O que você deseja excluir?");
  puts("[1] Nome");
  puts("[2] Endereço");
  puts("[3] Telefone");
  switch(opcao) {
    case 1:
      limpaString(usuario.nome);
    break;

    case 2:
      limpaEndereco(usuario.endereco);
    break;

    case 3:
       usuario.telefone = 0;
    break;
  }
}
