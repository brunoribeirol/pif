//PONTEIRO E FUNÇÃO PRECO (2)

#include <stdio.h>
#include <stdlib.h>

void reajusta20(float *preco, float *reajuste);

int main(void)
{

    float valPreco;
    float valReal;

    do{
        printf("Insira o preço atual: ");
        scanf("%f", &valPreco);
        reajusta20(&valPreco, &valReal); // endereco de memoria das variaveis valPreco e valReal
        printf("Valor do novo preço: %.2f\n", valPreco);
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

/*
O programa começa, e valPreco e valReal são inicializados como 0.0.

O usuário insere um preço, por exemplo, 100.0. O programa lê esse valor e armazena em valPreco.

Agora, a função reajusta20 é chamada com valPreco e valReal como argumentos.

Dentro da função reajusta20, preco aponta para o endereço de memória de valPreco, e reajuste aponta para o endereço de memória de valReal.

A função calcula o aumento em 20% do preço atual: *reajuste = (*preco) * 0.2. Nesse caso, o aumento é 100.0 * 0.2 = 20.0, que é armazenado em valReal.

Em seguida, o novo preço é calculado: *preco = (*preco) * 1.2. O preço original de 100.0 é aumentado em 20% para 120.0, que é armazenado em valPreco.

O programa imprime o novo preço, que é 120.0, usando printf.

Também imprime o aumento, que é 20.0, usando printf.

O loop continua, permitindo ao usuário continuar inserindo preços até que valPreco seja igual a 0.0, momento em que o programa termina.

Espero que isso tenha esclarecido como o programa funciona com números e como a função reajusta20 usa ponteiros para modificar as variáveis valPreco e valReal no escopo principal do programa.
*/