#include <stdio.h>
 
int main() {
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}

/*Loops com condições múltiplas
Utilizam mais de uma condição para determinar quando devem continuar ou parar. 
Isso é frequentemente realizado com o loop for, em que a expressão de condição pode 
incluir múltiplas condições combinadas usando operadores lógicos (“&&” para E lógico e “||” para OU lógico).
Loops com condições múltiplas são úteis para situações em que o controle do loop depende de várias 
variáveis ou condições que precisam ser verificadas simultaneamente. Vamos conhecer um exemplo de 
loops com condições múltiplas! */

#include <stdio.h>
 
int main() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}

/*Loops com atualizações complexas
São loops em que a variável de controle é modificada de maneiras mais sofisticadas que simples 
incrementos ou decrementos. Esses loops frequentemente utilizam expressões condicionais, cálculos 
matemáticos ou funções para alterar a variável de controle a cada iteração. Isso permite uma maior 
flexibilidade e controle sobre o fluxo do loop, adaptando-se a requisitos específicos ou padrões 
de iteração não lineares. Confira um exemplo de loops com atualizações complexas!*/

#include <stdio.h>
 
int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}


/*Uso de continue e break
Nos loops for, continue e break são usados para controlar o fluxo de execução.

Continue
Faz com que o loop pule a iteração atual e prossiga com a próxima iteração, 
verificando a condição do loop novamente.

Break
Interrompe o loop imediatamente, saindo dele antes que todas as iterações sejam concluídas.

Os comandos continue e break são úteis para evitar certas condições ou para terminar o loop com base em critérios específicos*/

#include <stdio.h>
 
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    }
    return 0;
}
