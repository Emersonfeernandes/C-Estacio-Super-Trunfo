#include <stdio.h>
#include <string.h>

// Função para Calcular o PIB per Capita
float calcularPIBperCapita(float PIB, int populacao) {
    return (float) PIB / populacao;
}
 
// Função para Calcular a Densidade Populacional
float calcularDensidade(int populacao, float area) {
    return (float) populacao / area;
}

int main(){
    char C1estado[4], C1cidade[20], C1letra, C2estado[4], C2cidade[20], C2letra;
    int C1populacao, C1pontosTuristico, C2populacao, C2pontosTuristico;
    float C1area, C1PIB, C2area, C2PIB; 

    // CARTA 1
    printf("Digite a letra do Estado de 'A' a 'H' da carta 1: ");
    scanf(" %c", &C1letra);

    printf("Digite o código do Estado de 01 a 04 (ex: A01, B03) da carta 1: ");
    scanf("%s", C1estado);
    getchar();  // limpa o ENTER do buffer

    printf("Digite o nome da cidade da carta 1: ");
    fgets(C1cidade, 20, stdin); // pegar cidades que não só um nome
    C1cidade[strcspn(C1cidade, "\n")] = 0; // removendo a quebra de linha do fgets

    printf("Digite a população da cidade de acordo com o último senso da carta 1: ");
    scanf("%d", &C1populacao);

    printf("Quantos pontos turístico tem na cidade da carta 1? ");
    scanf("%d", &C1pontosTuristico);

    printf("Qual área (em km²) na cidade da carta 1? ");
    scanf("%f", &C1area);

    printf("Qual é o PIB da cidade da carta 1? ");
    scanf("%f", &C1PIB);

    // CARTA 2
    printf("Digite a letra do Estado de 'A' a 'H' da carta 2: ");
    scanf(" %c", &C2letra);

    printf("Digite o código do Estado de 01 a 04 (ex: A01, B03) da carta 2: ");
    scanf("%s", C2estado);
    getchar();  // limpa o ENTER do buffer

    printf("Digite o nome da cidade da carta 2: ");
    fgets(C2cidade, 20, stdin); // pegar cidades que não só um nome
    C2cidade[strcspn(C2cidade, "\n")] = 0; // removendo a quebra de linha do fgets

    printf("Digite a população da cidade de acordo com o último senso da carta 2: ");
    scanf("%d", &C2populacao);

    printf("Quantos pontos turístico tem na cidade da carta 2? ");
    scanf("%d", &C2pontosTuristico);

    printf("Qual área (em km²) na cidade da carta 2? ");
    scanf("%f", &C2area);

    printf("Qual é o PIB da cidade da carta 2? ");
    scanf("%f", &C2PIB);

    // PRINTs DA CARTA 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", C1letra);
    printf("Código: %c%s\n", C1letra, C1estado);
    printf("Cidade: %s\n", C1cidade);
    printf("População: %d\n", C1populacao);
    printf("Área: %.2f km²\n", C1area);
    printf("PIB: %.2f bilhões de reais\n", C1PIB);
    printf("Número de Pontos Turísticos: %d\n", C1pontosTuristico);
    printf("Densidade Populacional: %.2f\n", calcularDensidade(C1populacao, C1area));

    // PRINTs DA CARTA 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", C2letra);
    printf("Código: %c%s\n", C2letra, C2estado);
    printf("Cidade: %s\n", C2cidade);
    printf("População: %d\n", C2populacao);
    printf("Área: %.2f km²\n", C2area);
    printf("PIB: %.2f bilhões de reais\n", C2PIB);
    printf("Número de Pontos Turísticos: %d\n", C2pontosTuristico);

    return 0;    
}
