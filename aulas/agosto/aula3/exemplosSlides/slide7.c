#include <stdio.h>

int main() {

    int a;

    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &a);

    int matriz[a][a];
    int i, j;

    printf("Voce construiu uma matriz de %dx%d elementos\n", a, a);

    for (i = 0; i < a; i++) { //percorrendo linhas
        for (j = 0; j < a; j++) { //percorrendo colunas
           matriz[i][j] = i + j;
           printf("Elemento [%d][%d] igual a %d\n", i, j, matriz[i][j]);
        }  
    }
    
    return 0;
}