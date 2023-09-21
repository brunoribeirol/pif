//INTRODUÇÃO A PONTEIROS

#include <stdio.h>

int main(void)
{
  
    int x = 15, y = 2, z[10], i;
    int *ip = NULL;
    ip = &x; //ip aponta para a variavel x 

    printf("Endereco de ip: %p\n", ip);
    printf("Valor de ip %d\n", *ip);
    printf("Valor da variavel y: %d\n", y);

    y = *ip; //y vai receber o valor de x, y = x 
    printf("Novo valor da variavel y: %d\n", y);
    printf("Valor da variavel x: %d\n", x);
    
    *ip = 0; // x = 0
    printf("Novo valor da variavel x: %d\n", x);

    ip = &z[0];
    printf("Novo endereco de ip: %p\n", ip);
    printf("Valor de ip %d\n", *ip);

    //atribuindo valores a z
    for(i = 0; i < 10; i++)
    { 
        z[i] = 2 * i + 1;
    } //1 3 5 7 9 11

    printf("Novo endereco de ip: %p\n", ip);
    printf("Endereco de ip+1: %p\n", ip + 1);
    printf("Novo valor de ip %d\n", *ip);
    printf("Valor do proximo endereco de memoria de ip %d\n", *(ip + 2));
    //printf("Valor do proximo endereco de memoria de ip %d\n", *(ip + 4)); //z[4]
    //printf("O valor do meu quinto elemento eh %d\n", z[4]);

    return 0;

}