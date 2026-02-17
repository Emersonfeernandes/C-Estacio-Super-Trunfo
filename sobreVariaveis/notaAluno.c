#include <stdio.h>

int main(){
    char nome[20];
    int idade, matricula; 
    float altura; 

    printf("Qual é seu nome? ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual é a matricula? ");
    scanf("%d", &matricula);

    printf("Qual a sua altura? ");
    scanf("%f", &altura);


    printf("\nO aluno, %s, ", nome);
    printf("da matricula: %d, ", matricula);
    printf("de idade: %d, ", idade);
    printf("e altura: %.2f\n", altura);

    return 0;    
}