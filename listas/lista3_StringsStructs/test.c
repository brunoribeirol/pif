#include <stdio.h>
#include <string.h>

int main() {
    int N; // Número de testes
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int K; // Número de pessoas no grupo
        scanf("%d", &K);

        char S[20]; // Idioma falado por um usuário

        scanf("%s", S); // Lê o idioma do primeiro usuário

        int mesmoIdioma = 1; // Assume que todos falam o mesmo idioma

        for (int j = 1; j < K; j++) {
            char idiomaAtual[20];
            scanf("%s", idiomaAtual);

            // Compara o idioma atual com o primeiro idioma
            if (strcmp(S, idiomaAtual) != 0) {
                mesmoIdioma = 0; // Pelo menos uma pessoa fala um idioma diferente
            }
        }

        if (mesmoIdioma) {
            printf("%s\n", S); // Todas as pessoas falam o mesmo idioma
        } else {
            printf("ingles\n"); // Pelo menos uma pessoa fala um idioma diferente
        }
    }

    return 0;
}
