//PONTEIRO E FUNÇÃO PRECO (2)

#include <stdio.h>
#include <stdlib.h>

void reajusta20(float *preco, float *reajuste);

int main(void)
{

    float valPreco, valReal;

    do{
        printf("Insira o preco atual: \n");
        scanf("%f", &valPreco);
        reajusta20(&valPreco, &valReal); // endereco de memoria das variaveis valPreco e valReal
        printf("Valor do novo preco: %.2f\n", valPreco);
        printf("O aumento foi de: %.2f\n", valReal);
    }
    while(valPreco != 0.0);

    return 0;
}

// reajuste de 20% no preco existente
void reajusta20(float *preco, float *reajuste)
{
    *reajuste = (*preco) * 0.2;
    *preco = (*preco) * 1.2;
}