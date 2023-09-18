#include <stdio.h>

int main() {

    int codigo, quantidade;
    float preco;

    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 1)
    {
        preco = 4.00;
    }
    else if (codigo == 2)
    {
        preco = 4.50;
    }
    else if (codigo == 3)
    {
        preco = 5.00;
    }
    else if (codigo == 4)
    {
        preco = 2.00;
    }
    else if (codigo == 5)
    {
        preco = 1.50;
    }

    float total;

    total = preco * quantidade;

    printf("Total: R$ %.2f\n", total);

    return 0;
}