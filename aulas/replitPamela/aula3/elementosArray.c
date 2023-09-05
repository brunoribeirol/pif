//ELEMENTOS DE UM ARRAY

#include <stdio.h>

int main () {

    int vetor[5];
    int i, soma;

    soma = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
        printf("Elemento [%d] do array  = %d\n",i, vetor[i]);
    }
    printf("Soma: %d\n", soma);
    
    return 0;
}