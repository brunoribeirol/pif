//MATRIZES
/*  Uma matriz pode ser considerada uma tabela um N linhas e colunas, em que cada elemento ocupara uma posição em uma linha e coluna especifica */

#include <stdio.h>

int main()
{  
    //Definindo uma matriz
    //coluna             0   1   2   3     0   1   2   3     0   1   2   3
    int matriz[3][4] = {{10, 20, 25, 30}, {35, 40, 45, 50}, {55, 60, 65, 70}};
    //linha                    0                 1                  2

    //Manipulando 1 elemento da matriz
    matriz[0][0] = 10;
    printf("Linha 1 - Coluna 1: matriz[0][0] = %d\n", matriz[0][0]);

    //Colocando isso apenas para saber que o que é o que
    printf("-----------------------------------------\n");

    //Lendo elementos para uma matriz
    for (int i = 0; i < 3; i++) //Passa pelas linhas da matriz
    {
        for (int j = 0; j < 4; j++) //Passa pelas colunas da matriz
        { 
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimindo elementos de uma matriz
    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 4; j++)
        { 
            printf("Linha %d - Coluna %d: matriz[%d][%d] = %d\n", i + 1, j + 1, i, j, matriz[i][j]);
        }
    }


    return 0;
}
