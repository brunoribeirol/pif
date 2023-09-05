#include <stdio.h>

int main()
{
    int N;

    while (1)
    {
        scanf("%d", &N);

        if (N == 0)
        {
            // condição de quebra de codigo
            break;
        }

        int matriz[15][15];
        int T = 1;

        // formar a matriz com os valores
        for (int i = 0; i < N; i++)
        {
            int valor = 1 << i;
            for (int j = 0; j < N; j++)
            {
                matriz[i][j] = valor;
                valor *= 2;

                // tamanho da matriz
                int num = matriz[i][j];
                int temp_T = 1;
                while (num > 9)
                {
                    num /= 10;
                    temp_T++;
                }
                if (temp_T > T)
                {
                    T = temp_T;
                }
            }
        }

        // Print da Matriz
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (j == 0)
                {
                    printf("%*d", T, matriz[i][j]);
                }
                else
                {
                    printf(" %*d", T, matriz[i][j]);
                }
            }
            printf("\n");
        }

        printf("\n"); // Imprime uma linha em branco após o array
    }

    return 0;
}