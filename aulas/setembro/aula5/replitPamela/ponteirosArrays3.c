//PONTEIROS E ARRAYS 3

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int M[5] = {92, 81, 70, 69, 58};
    int i, *p = M; //inicializa e cria um ponteiro variavel p que aponta para o comeco do array

    //busca por index do array
    for(i = 0; i < 5; i++)
    { 
        M[i]++;
        printf("%d\t", M[i]);
    }
    printf("\n");

    //busca pelo ponteiro constante do array (incremento dos enderecos de memoria)
    for(i = 0; i < 5; i++)
    {
        M[i]--;
        printf("%d\t", *(M + i));
    }
    printf("\n");
    
    for(i = 0; i < 5; i++)
    {
        M[i] *= 2;
        printf("%d\t", *(p++)); //busca pelo ponteiro variavel p
    }
    
    printf("\n");
    return 0;
}