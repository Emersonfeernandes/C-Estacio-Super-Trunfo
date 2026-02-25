#include <stdio.h>
 
int main() {
    float notas[3] = {85.5, 90.0, 78.0};  // Array de notas de 3 alunos
 
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);
 
    return 0;
}



Armazenamento de caracteres

Arrays também podem ser usados para armazenar caracteres, como letras ou palavras. Esse exemplo demonstra como criar e acessar um array de caracteres. Confira!

#include <stdio.h>
 
int main() {
    char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres
 
    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);
 
    return 0;
}


Arrays utilizando string

Arrays podem armazenar strings, permitindo a manipulação de conjuntos de palavras ou frases. Veja o exemplo!

#include <stdio.h>
 
int main() {
    char *nomes[] = {"Alice", "Bob", "Carol"};
    int i;
    for(i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}


O que são matrizes?

São uma generalização dos arrays. Enquanto um array é unidimensional, uma matriz pode ter duas ou mais dimensões. A matriz bidimensional, a mais comum, é essencialmente uma tabela ou grade de valores em que cada elemento é acessado por dois índices: um para a linha e outro para a coluna.


Definição e inicialização de matrizes

Uma matriz bidimensional de inteiros pode ser definida da seguinte forma. Confira!

#include <stdio.h>
 
int main() {
    int matriz[3][3];  // Declaração de uma matriz 3x3 de inteiros
 
    // Inicializando os elementos da matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
 
    // Acessando elementos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);
 
    return 0;
}

Inicialização simplificada

Semelhante aos vetores, você pode inicializar uma matriz ao mesmo tempo em que a declara:

int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

Acessando elementos de uma matriz

Cada elemento de uma matriz pode ser acessado diretamente pelos seus índices de linha e coluna. Vamos ver como acessar e imprimir elementos específicos de uma matriz. Veja!

#include <stdio.h>
 
int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    // Acessando e imprimindo elementos específicos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);
    printf("O elemento na posição [2][2] é %d\n", matriz[2][2]);
 
    return 0;
}
