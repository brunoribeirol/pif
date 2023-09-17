//MULTIPLICAÇÃO DE MATRIZES
/*  - Para fazer uma multiplicação de matrizes, o valor do tamanho coluna da primeira matriz tem que ser igual ao tamanho da linha da segunda matriz. A matriz resultante vai ter o numero de linhas da primeira matriz e o numero de colunas da segunda matriz.
- A multiplicação de matrizes consiste na soma multiplicação dos elementos de cada linha da matrizA e cada coluna da matrizB */

#include <stdio.h>

int main()
{

    int matrizA[3][2];

    //Solicitar ao usuário que insira os dados da matrizA
    printf("Digite os elementos da matriz A (3x2):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    //Colocando isso apenas para saber que o que é o que
    printf("-----------------------------------------\n");


    int matrizB[2][2];

    //Solicitar ao usuário que insira os dados da matrizB
    printf("Digite os elementos da matriz B (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    int resultado[3][2];

    //Realizando a multiplicação de matrizes
    int a = 3; // Número de linhas de matrizA
    int b = 2; // Número de colunas de matrizB
    int c = 2; // Número de colunas de matrizA (ou número de linhas de matrizB)

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Imprimir a matriz resultante da multiplicação
    printf("Resultado da Multiplicação:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

