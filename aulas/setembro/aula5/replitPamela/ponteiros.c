//INTRODUÇÃO A PONTEIROS

#include <stdio.h>

int main(void)
{
  
    int x = 12;
    int y = 7;
    int z[10];
    int *ip = NULL; // ip é um ponteiro para inteiros; ip is a pointer to int

    // ip aponta para o endereço de memória da variável x; ip now points to x
    ip = &x; 
    printf("Endereço de ip: %p\n", ip);
    printf("Valor de ip: %d\n", *ip);
    printf("Valor da variável y: %d\n", y);

    printf("\n");

    // y recebe o valor apontado por ip (que é o valor de x); y is now the same value as x
    y = *ip; 
    printf("Novo valor da variável y: %d\n", y);
    printf("Valor da variável x: %d\n", x);

    printf("\n");
    
    // altera o valor apontado por ip (altera x); changes x value
    *ip = 0;
    printf("Novo valor da variável x: %d\n", x);

    printf("\n");

    // ip aponta para o primeiro elemento do array z; ip now points to z[0]
    ip = &z[0];
    printf("Novo endereço de ip: %p\n", ip); // será um valor indefinido porque o array z ainda não foi definido
    printf("Valor de ip: %d\n", *ip); // será um valor indefinido porque o array z ainda não foi definido

    printf("\n");

    // atribuindo valores ao array z
    for(int i = 0; i < 10; i++) // 10 porque é o tamanho do array z
    { 
        z[i] = 2 * i + 1;
    } //1 3 5 7 9 11 13 15 17 19

    printf("Novo endereço de ip: %p\n", ip); // se z[0] = 0x16b97b270, então z[1] será = 0x16b97b274; porque é um inteiro, ou seja, 4 bits
    printf("Endereço de ip + 1: %p\n", ip + 1);
    printf("Novo valor de ip: %d\n", *ip);
    printf("Valor do 2º endereço de memória de ip: %d\n", *(ip + 1));
    printf("Valor do 6º endereco de memoria de ip %d\n", *(ip + 5)); //z[6]
    printf("O valor do meu 10º elemento eh %d\n", z[9]);
    printf("O valor do meu 12º elemento eh %d\n", z[11]); // é retornado um valor desconhecido porque o array z só comporta 10 espaços, z[10]

    return 0;

}