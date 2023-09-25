#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Consumir a nova linha após a leitura de N

    while (N--) {
        char line[201]; // Considerando que a linha pode ter no máximo 200 caracteres
        fgets(line, sizeof(line), stdin);

        int letterCount[26] = {0};

        // Contar a frequência das letras (ignorar case sensitive)
        for (int i = 0; line[i]; i++) {
            char c = tolower(line[i]);
            if (isalpha(c)) {
                letterCount[c - 'a']++;
            }
        }

        int maxCount = 0;
        for (int i = 0; i < 26; i++) {
            if (letterCount[i] > maxCount) {
                maxCount = letterCount[i];
            }
        }

        // Imprimir as letras com a maior contagem em ordem alfabética
        for (int i = 0; i < 26; i++) {
            if (letterCount[i] == maxCount) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }

    return 0;
}
