// Neste desafio de variáveis, vamos praticar a declaração e uso de variáveis em C.
// Vamos alterar o código criado inicialmente para perguntar ao usuário o nome, idade, altura e gênero, calcular o ano de nascimento e exibir todas as informações em seguida.
#include <stdio.h> 

int main (){
  // Declarando as variáveis
  // e atribuindo valores
  const int anoAtual = 2025; // Constante para o ano atual
  char nome[30]; // Variável para armazenar o nome com até 30 caracteres
  int idade; // Variável inteira para armazenar a idade
  float altura; // Variável de ponto flutuante (Decimal) para armazenar a altura
  char genero; // Variável de um caractere para armazenar o gênero
  int anoNascimento; // Variável inteira para armazenar o ano de nascimento

  // Entrada de dados do usuário
  printf("Digite seu nome: ");
   fgets(nome, sizeof(nome), stdin); // Lê uma string da entrada padrão
  // fgets é usado para ler strings com espaços, enquanto scanf pode parar na primeira ocorrência de espaço

  printf("Digite sua idade: ");
  scanf("%d", &idade); // Lê um inteiro da entrada padrão

  printf("Digite sua altura (em metros): ");
  scanf("%f", &altura); // Lê um float da entrada padrão

  printf("Digite seu gênero (M/F): ");
  scanf(" %c", &genero); // Lê um único caractere da entrada padrão

  // Cálculo do ano de nascimento
  anoNascimento = anoAtual - idade;

  // Saída de dados na tela usando printf
  printf("\n===== Informações do Usuário =====\n");
  printf("Nome: %s", nome); // %s é usado para strings (array de caracteres)
  // Não é necessário usar \n aqui, pois fgets já inclui a nova linha
  printf("Idade: %d anos\n", idade); // %d é usado para inteiros
  printf("Altura: %.2f metros\n", altura); // %.2f é usado para ponto flutuante com duas casas decimais
  printf("Gênero: %c\n", genero); // %c é usado para um único caractere
  printf("Ano de Nascimento: %d\n", anoNascimento); // Exibe o ano de nascimento calculado

  return 0;
}