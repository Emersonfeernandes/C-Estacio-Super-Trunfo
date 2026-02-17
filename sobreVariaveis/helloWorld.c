#include <stdio.h>

/*
%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/

int main(){
    char nome[20];
    int idade; // Declara uma variável inteira chamada "idade"
    float altura; // Declara uma variável de ponto flutuante chamada "altura"
    double salario; // Declara uma variável de ponto flutuante de dupla precisão chamada "salario"
    char opcao; // Declara uma variável de caractere chamada "opcao"

    printf("Qual é seu nome? ");
    //scanf("%s", nome);
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = 0;  // remove o ENTER

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    printf("Qual o seu salario? ");
    scanf("%lf", &salario);

    printf("Escolha uma letra: ");
    scanf(" %c", &opcao); // espaço antes de %c evita problema com ENTER


    printf("\nOlá, %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Salario: %.2lf\n", salario);
    printf("Opcao: %c\n", opcao);

    return 0;

    //printf("Hello World!\n");
    
}