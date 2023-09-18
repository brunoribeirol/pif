#include <stdio.h>
#include <stdlib.h>

void linha(int n);

int main(void)
{
    
    linha(20);
    printf("= UM PROGRAMA EM C =\n");
    linha(20);

    return 0;
}

void linha(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("=");
    }
    printf("\n");   
}