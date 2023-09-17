//PERCORRENDO UMA MATRIZ

#include <stdio.h>

int main() {

    int a, b;

    printf("Digite dois numeros de 1 a 10: ");
    scanf("%d %d", &a, &b);

    int matriz[a][b];
    int i, j;

    printf("Voce construi uma matriz [%d][%d]\n", a, b);

    for(i = 0; i < a; i++) {  // percorrendo linhas
        for(j = 0; j < b; j++) {
            matriz[i][j] = i+j;
        printf("Elemento [%d][%d] igual a %d\n", i, j, matriz[i][j]);
      }
  }
  
    return 0;
}