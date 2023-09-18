#include <stdio.h>


int main() {

    int N; 

    scanf("%d", &N); //tamanho do vetor X

    int X[N]; //criando o vetor X do tamnaho N

     for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]); //adiciona os valores (dependendo do i) ao vetor X
    }

    int menorValor = X[0]; //defini o maior numero como o primeiro elemento de X
    int posicao = 0; //defini a posicao como 0 (primeiro elemento de X)   

    for (int i = 0; i < N; i++)
    {
         if (X[i] < menorValor)
        {
            menorValor = X[i]; //achando a menor valor
            posicao = i; //achando a posicao do menor valor
        }
    }

    printf("Menor valor: %d\n", menorValor); //printando menor valor
    printf("Posicao: %d\n", posicao); //printando a posicao do menor valor

    return 0;
}