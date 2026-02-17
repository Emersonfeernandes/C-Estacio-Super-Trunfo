#include <stdio.h>

int main(){
    char nome[20];
    int idade; // Declara uma variável inteira chamada "idade"
    float altura; // Declara uma variável de ponto flutuante chamada "altura"
    double salario; // Declara uma variável de ponto flutuante de dupla precisão chamada "salario"
    char opcao; // Declara uma variável de caractere chamada "opcao"

    printf("Qual a sua idade\n");
    scanf("%d", &idade);

    printf("Qual a sua altura\n");
    scanf("%f", &altura);

    printf("Qual o seu salario\n");
    scanf("%lf", &salario);

    printf("Escolha uma letra\n");
    scanf(" %c", &opcao); // espaço antes de %c evita problema com ENTER


    printf("\nResumo:\n");
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Salario: %.2lf\n", salario);
    printf("Opcao: %c\n", opcao);

    return 0;

    //printf("Hello World!\n");
    
}