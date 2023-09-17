//MATRIZ TRANSPOSTA

#include <stdio.h>

//Funcao para imprimir elementos de uma matriz
void imprimeMatriz(int rows, int cols, int matrix[rows][cols])
{

	for (int i = 0; i < rows; i++)
    {
        printf("|");
		for (int j = 0; j < cols; j++)
        {
			printf("%d\t", matrix[i][j]);
		}
    printf("|\n");
	}
}

int main(void)
{
    int a, b;
    printf("Digite as duas dimensoes de sua matriz: \n");
    scanf("%d %d",&a,&b);

    int matriz[a][b], matrizT[b][a];

    for(int i = 0;i < a; i++) //Atribuindo valores a matriz
    { 
        for(int j = 0; j < b; j++)
        {
        printf("Digite o elemento [%d][%d] de sua matriz\n",i+1,j+1);
        scanf("%d", &matriz[i][j]); //Matriz normal
        matrizT[j][i] = matriz[i][j]; //Matriz tranposta
        //Matriz tranposta tem colunas = linhas da matriz normal
        }
    }

    printf("---------------Matriz A---------------\n");
    imprimeMatriz(a,b, matriz);
    
    printf("---------------Matriz Transposta de A---------------\n");
    imprimeMatriz(b,a, matrizT);

    return 0;
}