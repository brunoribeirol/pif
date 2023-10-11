//MATRIZ DINÂMICA

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int linhas;
    int colunas;

    printf("Digite as dimensoes de sua matriz\n");
    scanf("%d %d", &linhas, &colunas);

    int **matriz = (int **)calloc(linhas,sizeof(int*));
    //matriz[3] = ptr

    for(int i = 0; i < linhas; i++)
    {
        matriz[i] = (int*)calloc(colunas,sizeof(int));
        //matriz = matriz[0][0], matriz[0][1], matriz[0][2], e matriz[0,3]
    }
    
    for(int i = 0; i < linhas; i++)
    {
        printf("| ");
        for(int j = 0; j < colunas; j++)
        {
            if(i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }

        printf("%d ",matriz[i][j]); 
        }
        printf("|\n");
    }
    
    
        for(int i = 0; i < linhas; i++)
        {
        free(matriz[i]);
        //matriz = matriz[0][0], matriz[0][1], matriz[0][2], e matriz[0,3]
        }
        free(matriz);

    return 0;
}