/*
Desafio 2 - Objetivos

1. Alterar a leitura do nome para usar fgets (aceitar nomes com espaço).
   - Incluir string.h
   - Remover o '\n' do final com strcspn.

2. Perguntar ao usuário o dia e o mês de nascimento.
   - Criar variáveis diaNasc e mesNasc.
   - Ler os valores e exibir para testar.

3. Calcular o ano de nascimento.
   - anoNascimento = anoAtual - idade

4. Ajustar o ano de nascimento conforme o aniversário.
   - Se ainda não fez aniversário este ano → anoNascimento--

5. Calcular informações extras:
   - Idade em dias (idade * 365)
   - Ano em que fará 100 anos (anoNascimento + 100)

6. Exibir todas as informações organizadas.
*/
#include <stdio.h> 
#include <string.h> // Biblioteca necessária para manipulação de strings

int main (){
  // Declarando as variáveis
  // e atribuindo valores
  const int anoAtual = 2025, mesAtual = 8, diaAtual = 24; // Constante para o ano atual
  char nome[30]; // Variável para armazenar o nome com até 30 caracteres
  int idade; // Variável inteira para armazenar a idade
  float altura; // Variável de ponto flutuante (Decimal) para armazenar a altura
  char genero; // Variável de um caractere para armazenar o gênero
  int anoNascimento, dianasc, mesnasc; // Variável inteira para armazenar o ano de nascimento
  int idadeDias, anoCem; // Variáveis para idade em dias e ano que fará 100 anos

  // Entrada de dados do usuário
  printf("Digite seu nome: ");
   fgets(nome, sizeof(nome), stdin); // Lê uma string da entrada padrão
  // fgets é usado para ler strings com espaços, enquanto scanf pode parar na primeira ocorrência de espaço
  nome[strcspn(nome, "\n")] = 0; // Remove o '\n' do final da string, se presente

  printf("Digite sua idade: ");
  scanf("%d", &idade); // Lê um inteiro da entrada padrão

  printf("Digite o dia do seu nascimento: ");
  scanf("%d", &dianasc); // Lê o dia de nascimento

  printf("Digite o mês do seu nascimento: ");
  scanf("%d", &mesnasc); // Lê o mês de nascimento

  printf("Digite sua altura (em metros): ");
  scanf("%f", &altura); // Lê um float da entrada padrão

  printf("Digite seu gênero (M/F): ");
  scanf(" %c", &genero); // Lê um único caractere da entrada padrão

  // Ajuste do ano de nascimento
  anoNascimento = anoAtual - idade;
  idadeDias = idade * 365; // Cálculo da idade em dias
  anoCem = anoNascimento + 100; // Cálculo do ano em que fará 100 anos

    if (mesnasc > mesAtual || (mesnasc == mesAtual && dianasc > diaAtual)) {
    anoNascimento--; // ainda não fez aniversário este ano
}

  // Saída de dados na tela usando printf
  printf("\n===== Informações do Usuário =====\n"); 
  printf("Nome: %s\n", nome); // %s é usado para strings (array de caracteres)
  // Não é necessário usar \n aqui, pois fgets já inclui a nova linha
  printf("Idade: %d anos\n", idade); // %d é usado para inteiros
  printf("Data de Nascimento: %02d/%02d/%d\n", dianasc, mesnasc, anoNascimento); // Exibe a data de nascimento formatada
  printf("idade em dias: %d dias\n", idadeDias); // Exibe a idade em dias
  printf("Ano em que fará 100 anos: %d\n", anoCem); // Exibe o ano em que fará 100 anos
  printf("Altura: %.2f metros\n", altura); // %.2f é usado para ponto flutuante com duas casas decimais
  printf("Gênero: %c\n", genero); // %c é usado para um único caractere

  return 0;
}