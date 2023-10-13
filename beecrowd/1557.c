#include <stdio.h>
#include <math.h>

// Cria uma função para imprimir uma matriz quadrada
void matrizQuadrada(int N) {
    int matriz[15][15]; // Valor máximo da matriz

    // Preenche a matriz
    for (int i = 0; i < N; i++) // Percorre as linhas
    {
        for (int j = 0; j < N; j++) //Percorre as colunas
        {
            matriz[i][j] = pow(2, i) * pow(2, j); // Eleva ao quadrado o valor de i e j no momento
        }
    }

    // Determina o T máximo para formatar a saída
    int T = 0;
    int maiorNumero = matriz[N-1][N-1]; // O maior número na matriz, elemento da matriz que está na última linha e coluna
    while (maiorNumero > 0) {
        maiorNumero /= 10;
        T++;
    }

    // Imprime a matriz formatada
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%*d", T, matriz[i][j]);
            if (j < N - 1)
            {
                printf(" "); // Adiciona um espaço entre os números na mesma linha
            }
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }
}

int main() {
    int N; // Tamanho da matriz quadrada ([2][2], [3][3]...)

    while (1)
    {
        scanf("%d", &N);

        if (N == 0)
        {
            break;
        }

        matrizQuadrada(N); // Chama a funcao
        printf("\n"); // Adiciona uma linha em branco entre matrizes
    }

    return 0;
}
//beecrowd1557
