//ARRAYS
/*  Um array é uma lista de elementos, em que cada elemento está localizado em uma posição do array. Essa posição pode ser representada por um índice que pode ir de 0 a N-1 (N = tamanho do array). */

#include <stdio.h>

int main()
{
    //Definindo um array
    int array[6] = {1, 2, 3, 5, 8, 13}; //6 elementos
    //Índices       0  1  2  3  4  5

    //Para acessar e manipular um elemento de um array usamos o índice desse elemento 

    //Acessando um elemento de um array
    array[0] = 1;
    printf("1 elemento do array[0] = %d\n", array[0]);

    //Colocando isso apenas para saber que o que é o que
    printf("-----------------------------------------\n");

    //Lendo elementos de um array
    for (int i = 0; i < 6; i++) {
        scanf("%d", &array[i]);
    }

    //Imprimindo um array
    for (int i = 0; i < 6; i++) {
        printf("%d elemento do array na posicao[%d] = %d\n", i + 1, i, array[i]);
    }

    return 0;
}

