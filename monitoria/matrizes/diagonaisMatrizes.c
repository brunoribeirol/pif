//DIAGONAIS

/*  Os conceitos de diagonais se aplicam a apenas matrizes QUADRADAS (numero de linhas é igual ao número de colunas) */

/*  Diagonal Principal
    - Corta a matriz do topo esquerdo ate embaixo na direita. Os elementos dessa diagonal tem os 2 índices (linha e coluna) com o mesmo valor.
    - Elementos: m[0][0], m[1][1], m[2][2] */

/*  Diagonal Secundária
    - Corta a matriz do topo direito ate embaixo na esquerda.
    - Elementos: m[0][2], m[1][1], m[2][0] */

//MATRIZ IDENTIDADE
/*  Quando em uma matriz quadrada temos os elementos da diagonal principal igual a 1 e os restantes dos elementos da matriz igual a 0, temos uma matriz identidade */

#include <stdio.h>

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 3; j++)
        { 
            matriz[i][j] = 0;
        }
    }

    //Montando uma matriz identidade
    for (int i = 0; i < 3; i++)
    {
        matriz[i][i]++;
    }

    //Printando a matriz identidade
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Colocando isso apenas para saber que o que é o que
    printf("-----------------------------------------\n");

    /*

    SÓ FUNCIONA UMA POR VEZ

    //Fazendo uma diagonal secundaria
    for (int i = 0; i < 3; i++)
    {
        matriz[i][2 - i]++;
    }

     //Printando a matriz da diagonal secundaria
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    */

    return 0;

}




