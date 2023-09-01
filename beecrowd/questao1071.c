# include <stdio.h>

int main() {

    int X, Y;

    scanf("%d", &X);
    scanf("%d", &Y);

    int maior, menor;

    if (X > Y)
    {
        maior = X;
        menor = Y;
    }
    else {
        maior = Y;
        menor = X;
    }
    
    int i, somaImpares;

    somaImpares = 0;

    for (i = menor + 1; i < maior; i++)
    {
        if (i % 2 == 1)
        {
            somaImpares += i;
        }
    }

    printf("%d\n", somaImpares);
    
    return 0;
}