#include <stdio.h>

int main() {

    int X, Y, maior, menor;

    scanf("%d %d", &X, &Y);

    if (X > Y)
    {
        maior = X;
        menor = Y;
    }
    else {
        maior = Y;
        menor = X;
    }

    int i, somaImpares = 0;

    for (i = menor; i < maior; i++)
    {
        if (i % 2 == 1)
        {
            somaImpares = somaImpares + i;
        }
    }

    printf("%d\n", somaImpares);

    return 0;
}

/*
    for (i = menor + 1; i < maior; i++) {
        if (i % 2 == 1) {
            somaImpares = somaImpares + i;
        }
    }

    printf("%d\n", somaImpares);

    return 0;
}
*/

