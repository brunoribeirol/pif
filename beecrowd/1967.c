#include <stdio.h>

int main() {

    int G, A, M, C;
    scanf("%d %d %d %d", &G, &A, &M, &C);
    printf("\n");

    //Matriz GA
    int matrizGA[G][A];
    
    for (int i = 0; i < G; i++)
    {
        for (int j = 0; j < A; j++)
        {
            scanf("%d", &matrizGA[i][j]);
        }
    }
    printf("\n");

    //MatrizAM
    int matrizAM[A][M];

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrizAM[i][j]);
        }
    }
    printf("\n");

    //MatrizMC
    int matrizMC[M][C];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &matrizMC[i][j]);
        }
    }
    printf("\n");

    //Multiplicação matrizes
        //MatrizGM
    int matrizGM[G][M]; //[G][A] x [A][M] = [G][M]; coluna da 1 x linha da 2

    for (int i = 0; i < G; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrizGM[i][j] = 0;
            for (int k = 0; k < A ; k++) //porque A????
            {
                matrizGM[i][j] += matrizGA[i][k] * matrizAM[k][j];
            }
        }
    }

        //MatrizGC
    int matrizGC[G][C]; //[G][M] x [M][C] = [G][C]; coluna da 1 x linha da 2

    for (int i = 0; i < G; i++)
    {
        for (int j = 0; j < C; j++)
        {   
            matrizGC[i][j] = 0; 
            for (int k = 0; k < M; k++) //porque M???
            {
                matrizGC[i][j] += matrizGM[i][k] * matrizMC[k][j];
            }
        }
    }

    //Pritando a matriz final ([G][C])
    for (int i = 0; i < G; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d\t", matrizGC[i][j]);
        }
        printf("\n");
    }
    
    printf("\n"); 
    return 0;

}
//beecrowd 1967