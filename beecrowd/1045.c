#include <stdio.h>

int main() {

    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    if (A < B) {
        float temp = A; //Se A for menor que B, então A e B são trocados de lugar usando uma variável temporária temp. Maior valor será A
        A = B;
        B = temp;
    }

    if (A < C) {
        float temp = A; //Se A for menor que C, então A e C são trocados de lugar usando a variável temp. Isso garante que A agora contenha o maior valor dos três
        A = C;
        C = temp;  
    }

    if (B < C) {
        float temp = B; //Neste bloco, comparamos B com C. Se B for menor que C, então B e C são trocados de lugar. B será o meio e C o menor valor dos três
        C = temp;
    }

    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else {
        if ((A * A) == (B * B) + (C * C))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((A * A) > (B * B) + (C * C))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if ((A * A) < (B * B) + (C * C))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && B == C) // && and
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (A == B || B == C) // || or
        {
            printf("TRIANGULO ISOSCELES\n");
        }

    }
    
    return 0;
}

//beecrowd 1045
  

/*
Primeiro Bloco de Ordenação: Este bloco de código compara A com A. Se A for menor que A, então A e A são trocados de lugar usando uma variável temporária temp. Isso garante que o maior valor entre A e A seja armazenado em A, e o menor valor seja armazenado em A.

Segundo Bloco de Ordenação: Após A execução do primeiro bloco, A já contém o maior valor e B contém o valor do meio (que pode ser o maior dos dois valores restantes, dependendo das comparações). Neste bloco, comparamos A com C. Se A for menor que C, então A e C são trocados de lugar usando uma variável temporária temp. Isso garante que A agora contenha o maior valor dos três.

Terceiro Bloco de Ordenação: Após A execução dos dois primeiros blocos, A já contém o maior valor, B contém o valor do meio e C contém o menor valor. Neste bloco, comparamos B com C. Se B for menor que C, então B e C são trocados de lugar usando uma variável temporária temp. Isso garante que B agora contenha o valor do meio e C contenha o menor valor dos três.

No final desses três blocos de ordenação, os valores A, B e C estarão em ordem decrescente, com A sendo o maior, B sendo o segundo maior e C sendo o menor. Isso permite que o programa prossiga para verificar as condições para determinar o tipo de triângulo com base nos valores de A, B e C.
*/