#include <stdio.h>
#include <string.h>

// Função para entrada de dados
void entradaDados(char *letra, char *estado[4], char *cidade[20],
    int *populacao, int *pontosTuristico, float *area, float *PIB) {
    
    printf("Digite a letra do Estado de 'A' a 'H' da carta 1: ");
    scanf(" %c", letra);

    printf("Digite o código do Estado de 01 a 04 (ex: A01, B03) da carta 1: ");
    scanf("%s", estado);
    getchar();  // limpa o ENTER do buffer

    printf("Digite o nome da cidade da carta 1: ");
    fgets(cidade, 20, stdin); // pegar cidades que não só um nome
    cidade[strcspn(cidade, "\n")] = 0; // removendo a quebra de linha do fgets

    printf("Digite a população da cidade de acordo com o último senso da carta 1: ");
    scanf("%d", populacao);

    printf("Quantos pontos turístico tem na cidade da carta 1? ");
    scanf("%d", pontosTuristico);

    printf("Qual área (em km²) na cidade da carta 1? ");
    scanf("%f", area);

    printf("Qual é o PIB da cidade da carta 1? ");
    scanf("%f", PIB);
}
 
char* informcoes(char letra, char estado[4], char cidade[20],
    int populacao, int pontosTuristico, float area, float PIB){

    static char texto[1000];

    sprintf(texto,
        "\nCarta 1\n"
        "Estado: %c\n"
        "Código: %c%s\n"
        "Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n",
        letra, letra, estado, cidade,
        populacao, area, PIB, pontosTuristico);

    return texto;
}
// Função para exibir dados
void saidaDados(char carta1[10000], char carta2[10000]) {
    printf("%s", carta1);
    printf("%s", carta2);
}

int main(){
    char carta1[10000], carta2[10000];
    char estado[4], cidade[20], letra;
    int populacao, pontosTuristico;
    float area, PIB; 

    entradaDados(&letra, estado, cidade, &populacao,
    &pontosTuristico, &area, &PIB);

    strcpy(carta1, informcoes(letra, estado, cidade,
           populacao, pontosTuristico, area, PIB));

    entradaDados(&letra, estado, cidade, &populacao,
    &pontosTuristico, &area, &PIB);

    strcpy(carta2, informcoes(letra, estado, cidade,
           populacao, pontosTuristico, area, PIB));

    saidaDados(&carta1, &carta2);

    return 0;    
}