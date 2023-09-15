//VARIÁVEIS E OPERAÇÕES

#include <stdio.h>

int main() {

    int a, b, soma, modulo;
    float divisao;

    scanf("%d %d", &a, &b);

    soma = a + b;
    modulo = a%b;
    divisao = a/b;

    printf("A soma de a e b é igual a %d \n", soma);
    printf("O resto da divisão de a e b é igual a %d\n", modulo);
    printf("A divisão de a e b é igual a %.2f\n", divisao);

    float c, d;
    
    scanf("%f %f",&c, &d);
    divisao = c/d;
    printf("A divisão de c e d é igual a %.2f\n", divisao);

    return 0;
}
