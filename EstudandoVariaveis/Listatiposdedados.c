#include <stdio.h>

int main() {
    // Inteiros
    int idade = 25; // Variável inteira para armazenar a idade
    unsigned int pontos = 150; // Variável inteira sem sinal para armazenar pontos
    short anoCurto = 2025; // Variável curta para armazenar o ano
    unsigned short dias = 365; // Variável curta sem sinal para armazenar dias
    long populacao = 7800000000; // População mundial
    unsigned long distancia = 384400; // km Terra-Lua
    long long estrelas = 9000000000000; // Estimativa de estrelas na galáxia

    // Decimais
    float altura = 1.75; // Variável de ponto flutuante para armazenar a altura
    // float é usado para números com precisão simples
    double pi = 3.1415926535; // Variável de ponto flutuante de precisão dupla
    // double é usado para números com maior precisão
    long double piGrande = 3.14159265358979323846; // Variável de ponto flutuante de precisão estendida

    // Caractere e string
    char genero = 'M'; // Variável de caractere para armazenar o gênero
    // char é usado para armazenar um único caractere
    char nome[30] = "Lucas Tasca"; // Variável de string (array de caracteres) para armazenar o nome

    printf("===== Tabela de Tipos de Dados em C =====\n\n");

    // Inteiros
    printf("int idade = %d\n", idade); 
    // %d é usado para inteiros
    printf("unsigned int pontos = %u\n", pontos);
    // %u é usado para inteiros sem sinal
    printf("short anoCurto = %hd\n", anoCurto); 
    // %hd é usado para inteiros curtos
    printf("unsigned short dias = %hu\n", dias);
    // %hu é usado para inteiros curtos sem sinal
    printf("long populacao = %ld\n", populacao); 
    // %ld é usado para inteiros longos
    printf("unsigned long distancia = %lu km\n", distancia);
    // %lu é usado para inteiros longos sem sinal
    printf("long long estrelas = %lld\n", estrelas); 
    // %lld é usado para inteiros longos longos

    printf("\n"); 

    // Decimais
    printf("float altura = %.2f metros\n", altura);
    // %.2f é usado para ponto flutuante com duas casas decimais
    printf("double pi = %.10lf\n", pi);
    // %.10lf é usado para ponto flutuante de precisão dupla com 10 casas decimais
    printf("long double piGrande = %.15Lf\n", piGrande);
    // %.15Lf é usado para ponto flutuante de precisão estendida com 15 casas decimais

    printf("\n"); 

    // Caractere e string
    printf("char genero = %c\n", genero); 
    // %c é usado para um único caractere
    printf("char nome[] = %s\n", nome);
    // %s é usado para strings (array de caracteres)

    return 0;
}
