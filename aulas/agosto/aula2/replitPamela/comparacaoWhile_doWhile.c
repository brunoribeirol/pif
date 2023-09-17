//COMPARAÇÃO WHILE E D0-WHILE

#include <stdio.h>

int main () {

    int i = 0;

    printf("While loop\n");
    while (i > 10) { // nunca executa a instrucao, porque i é 0 e nunca será maior que 10
        printf("%d ", i);
        i++;
    }

    printf("\n");

    int j = 0;

    printf("Do while loop\n");
    do { // executa a instrucao ao menos uma vez, default do DO-WHILE
        printf("%d ", j);
        j++;
    } while (j > 10);

    return 0;
}