#include <stdio.h>

int maximo (int a, int b); //declaracao da funcao

int main(void)
{
    int a, b, max; //variaveis locais
    printf("Digite dois numeros de 0 a 100: \n");
    scanf("%d %d", &a, &b);

    max = maximo(a, b); //chamada da funcao
    printf("%d eh o maior entre os numeros\n", max);

    return 0;
}

int maximo(int a, int b)
{

    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}