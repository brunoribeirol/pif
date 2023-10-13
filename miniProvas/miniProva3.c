#include <stdio.h>

int main()
{
    
    int x = 12;
    int *ptr = NULL; // ip é um ponteiro para inteiros; ip is a pointer to int

    ptr = &x; 
    x = *ptr;

    printf("Endereço de ip: %p\n", ptr);
    printf("Valor de ptr: %d\n", *ptr);
    printf("Valor da variável x: %d\n", x);

    return 0;
}