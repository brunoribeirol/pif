//SOMA E SUBTRAÇÃO DE MATRIZES
/*  - Na soma ou subtração de matrizes as matrizes devem ter a mesma ordem (tamanhos iguais, os tamanhos das linhas e colunas da matriz A devem ser os mesmos tamanhos das linhas e colunas da matriz B).
- Na soma ou subtração de matrizes vamos simplesmente efetuar a operação entre cada elemento ta matriz A com o elemento de mesma posição na matriz B */

#include <stdio.h>

int main()
{

    int matrizA[3][3];
    
    //Solicitar ao usuário que insira os dados da matrizA
    printf("Digite os elementos da matriz A (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    //Colocando isso apenas para saber que o que é o que
    printf("-----------------------------------------\n");

    int matrizB[3][3];

    //Solicitar ao usuário que insira os dados da matrizB
    printf("Digite os elementos da matriz B (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    //Colocando isso apenas para saber que o que é o que
    printf("-----------------------------------------\n");

    int resultadoSoma[3][3];  

    //Realizando a soma de duas matrizes
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultadoSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    //Imprimir a matriz resultante da soma
    printf("Resultado da Soma:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", resultadoSoma[i][j]);
        }
        printf("\n");
    }

    //Colocando isso apenas para saber que o que é o que
    printf("-----------------------------------------\n");

    int resultadoSubtracao[3][3];
    //Realizando a subtração de duas matrizes
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultadoSubtracao[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    //Imprimir a matriz resultante da subtração
    printf("Resultado da Subtração:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", resultadoSubtracao[i][j]);
        }
        printf("\n");
    }

    return 0;
}
