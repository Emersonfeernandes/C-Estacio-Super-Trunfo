#include <stdio.h>

int main() {

    printf("=== OPERADORES ARITMETICOS ===\n");

    int a = 5;
    int b = 3;

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;

    int c = 10;
    int divisao = c / b;

    printf("Soma (5 + 3): %d\n", soma);
    printf("Subtracao (5 - 3): %d\n", subtracao);
    printf("Multiplicacao (5 * 3): %d\n", multiplicacao);
    printf("Divisao inteira (10 / 3): %d\n", divisao);

    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente);

    printf("\n=== OPERADORES DE ATRIBUICAO ===\n");

    int x = 5;
    printf("Valor inicial de x: %d\n", x);

    x += 3;
    printf("x += 3 -> %d\n", x);

    x -= 2;
    printf("x -= 2 -> %d\n", x);

    x *= 4;
    printf("x *= 4 -> %d\n", x);

    x /= 3;
    printf("x /= 3 -> %d\n", x);

    printf("\n=== OPERADORES DE INCREMENTO ===\n");

    int i = 1;
    printf("Valor inicial de i: %d\n", i);

    i++;
    printf("i++ -> %d\n", i);

    int p = 5;
    int pre_inc = ++p;
    printf("Pre-incremento (++p): p = %d, resultado = %d\n", p, pre_inc);

    int q = 5;
    int pos_inc = q++;
    printf("Pos-incremento (q++): q = %d, resultado = %d\n", q, pos_inc);

    printf("\n=== OPERADORES DE DECREMENTO ===\n");

    int j = 10;
    j--;
    printf("j-- -> %d\n", j);

    int r = 5;
    int pre_dec = --r;
    printf("Pre-decremento (--r): r = %d, resultado = %d\n", r, pre_dec);

    int s = 5;
    int pos_dec = s--;
    printf("Pos-decremento (s--): s = %d, resultado = %d\n", s, pos_dec);

    return 0;
}