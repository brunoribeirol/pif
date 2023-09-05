//beecrowd 1967

#include <stdio.h>

int main() {
    int N;

    while (1) {
        // Ler a ordem da matriz
        scanf("%d", &N);

        if (N == 0) {
            break; // Sinal de fim da entrada
        }

        int matriz[N][N];
        int num = 1;
        int T = 1; // Tamanho para formatação

        // Preencher a matriz e determinar T
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                matriz[i][j] = num;
                num++;
                int digitos = 0;
                int temp = matriz[i][j];
                while (temp != 0) {
                    temp /= 10;
                    digitos++;
                }
                if (digitos > T) {
                    T = digitos;
                }
            }
        }

        // Imprimir a matriz formatada
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%*d", T, matriz[i][j]);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }

        printf("\n"); // Deixar uma linha em branco após a matriz
    }

    return 0;
}
