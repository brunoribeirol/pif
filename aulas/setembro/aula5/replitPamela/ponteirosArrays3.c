//PONTEIROS E ARRAYS 3

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int M[5] = {92, 81, 70, 69, 58};
    int *p = M; // inicializa e cria um ponteiro variavel p que aponta para o comeco do array

    // busca por index do array
    for(int i = 0; i < 5; i++)
    { 
        M[i]++;
        printf("%d\t", p[i]); // imprime o valor de p[i] como um inteiro
        printf("%p\t\n", (void *)&p[i]); // imprime o endereço de p[i] como um ponteiro (hexadecimal); fiz o casting (void *)

        /*
        INÚTEIS
        Ou se você deseja imprimir o endereço de p[i] como um valor inteiro:
        printf("%d\t", (int)p[i]); // tenta interpretar o valor de p[i] como um valor inteiro, mas não faz sentido porque p[i] é uma variável de ponteiro
        printf("%d\t\n", (int)&p[i]); // imprime o endereço de p[i] como um valor inteiro
        */
    }
    printf("\n");

    // busca pelo ponteiro constante do array (incremento dos endereços de memória)
    for(int i = 0; i < 5; i++)
    {
        M[i]--;
        printf("%d\t", *(p + i)); // mesma coisa que M[i]
        // *(p + 0) = *(p) = M[0]
        // *(p + 3) = M[3]   
    }
    printf("\n");
    
    for(int i = 0; i < 5; i++)
    {
        M[i] *= 2; // M[0] = 92 * 2 = 184
        printf("%d\t", *(p++)); // acessa o valor atual de p e depois incrementa o ponteiro para apontar para o próximo elemento
    }
    
    printf("\n");
    return 0;
}