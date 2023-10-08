//PONTEIROS PARA PONTEIROS

#include <stdio.h>

int main(void)
{
    int var; // Declara uma variável inteira 'var'
    int *ptr1; // Declara um ponteiro para inteiro 'ptr1'
    int **ptr2; // Declara um ponteiro para ponteiro para inteiro 'ptr2'

    var = 10; // Atribui o valor 10 à variável 'var'
    ptr1 = &var; // Aponta 'ptr1' para o endereço de 'var'
    ptr2 = &ptr1; // Aponta 'ptr2' para o endereço de 'ptr1'

    printf("Endereco de ptr1 = %p\n", ptr2); // Imprime o endereço de memória apontado pelo ponteiro ptr2, ou seja, o endereço de ptr1.
    printf("Endereco de ptr1 = %p\n\n", &ptr1); // Imprime o endereço de memória de ptr1 diretamente.
    printf("Endereço de var = %p\n", ptr2); // Imprime o endereço de memória de var através de ptr2.; REMOVI O *
    printf("Endereço de var = %p\n\n", ptr1); // Imprime o endereço de memória da variável var, que é para onde ptr1 aponta.
    printf("Valor em var = %d\n", **ptr2); // Imprime o valor armazenado na variável var, que é apontada por ptr1.
    printf("Valor em var = %d\n", *ptr1); // Imprime o valor armazenado na variável var, que é apontada diretamente por ptr1.

    return 0;

    /*
    printf("%d\n", *ptr1); // Imprime o valor apontado por 'ptr1' (valor de 'var')
   
    printf("%p\n", ptr1); // Imprime o endereço de memória apontado pelo ponteiro 'ptr1' (variável 'var')
    printf("%p\n", &ptr1); // Imprime o endereço de memória onde o ponteiro 'ptr1' está armazenado

    printf("\n\n");

    printf("%d\n", **ptr2); // Imprime o valor apontado por 'ptr2' que aponta para 'ptr1' que aponta para 'var' (valor de 'var')

    printf("%p\n", ptr2); // Imprime o endereço de memória apontado por 'ptr2' (endereço de 'var')
    printf("%p\n", &ptr2); // Imprime o endereço de memória onde o ponteiro 'ptr2' está armazenado
    */
}

/*
printf("Valor em var = %d\n", **ptr2);: Nesta linha, **ptr2 é usado para acessar o valor armazenado na variável var. Primeiro, *ptr2 é usado para obter o valor do ponteiro ptr1, que aponta para var. Em seguida, **ptr2 é usado para acessar o valor armazenado em var. Portanto, esta linha imprime o valor atual da variável var.

printf("Valor em var = %d\n", *ptr1);: Nesta linha, *ptr1 é usado para acessar diretamente o valor da variável var. O ponteiro ptr1 aponta diretamente para var, então *ptr1 fornece o valor armazenado em var. Portanto, esta linha também imprime o valor atual da variável var.

ptr1
    %d
        //printf("%d\n", ptr1); NÃO USAR; evitar comportamento indefinido ou erros de compilação
        //printf("%d\n", &ptr1); NÃO USAR; evitar comportamento indefinido ou erros de compilação
    %p
        // printf("%p\n", *ptr1); NÃO USAR; evitar comportamento indefinido ou erros de compilação

ptr2
    %d
        // printf("%d\n", ptr2); NÃO USAR; evitar comportamento indefinido ou erros de compilação
        // printf("%d\n", &ptr2); NÃO USAR; evitar comportamento indefinido ou erros de compilação
    %p
        // printf("%p\n", *ptr2); NÃO USAR; evitar comportamento indefinido ou erros de compilação

*/



