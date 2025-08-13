#include <stdio.h>

int main (){
  // Declarando as variáveis
  // e atribuindo valores
  char nome[30] = "João Silva"; // Variável para armazenar o nome com até 30 caracteres
  int idade = 30; // Variável inteira para armazenar a idade
  float altura = 1.80; // Variável de ponto flutuante (Decimal) para armazenar a altura
  char genero = 'M'; // Variável de um caractere para armazenar o gênero
  int anoNascimento = 2025 - idade; // Variável inteira com cálculo para o ano de nascimento utilizando a variável idade 

  // Saida de dados na tela usando printf
  printf("Nome: %s\n", nome); // %s é usado para strings
  printf("Idade: %d anos\n", idade); // %d é usado para inteiros
  printf("Altura: %.2f metros\n", altura); // %.2f é usado para ponto flutuante com duas casas decimais
  printf("Gênero: %c\n", genero); // %c é usado para um único caractere
  printf("Ano de Nascimento: %d\n", anoNascimento); // Exibe o ano de nascimento calculado

  return 0;
  

}