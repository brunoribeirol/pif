//MATRIZ TRANSPOSTA
/*  Matriz transposta é a matriz virada, ou seja quando tocamos as linhas e colunas de uma dada matriz */

#include <stdio.h>

int main()
{
    //Criando uma matriz original
    int matriz[2][3];
    
    //Solicitando a entrada de números do usuário para a matriz original
    printf("Digite os elementos da matriz (2x3):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Criando uma matriz transposta
    int matrizTransposta[3][2];

    // Preenchendo a matriz transposta
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    // Imprimindo a matriz transposta
    printf("Matriz Transposta:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}