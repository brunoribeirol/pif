#include <stdio.h>

int main() {

    int vetor[5] = {0, 1, 3, 5, 7};

    int i, soma;

    soma = 0;

    for (i = 0; i < 5; i++)
    {
        soma = soma + vetor[i];
        printf("Elemento [%d] do array = %d\n", i, vetor[i]);
    }

    printf("Soma: %d\n", soma);

    return 0;
}