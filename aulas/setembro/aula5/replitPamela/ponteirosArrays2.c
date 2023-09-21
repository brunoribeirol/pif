//PONTEIROS E ARRAYS 2

#include <stdio.h>

int main(void)
{

    int a[99];
    int i;

    //Quais os valores do array?
    for(i = 0; i < 99; i++)
    { 
        *(a + i) = 98 - i;
    }

    /*for(i = 0; i < 99; i++)
    {
        printf("%d\t", a[i]);
    }*/ 

    //Quais os valores do array?
    for(i = 0; i < 99; i++)
    { 
        *(a + i) = *(a + (*( a + i)));
    }

    printf("\n\n");

    /*for(i = 0; i < 99; i++)
    {
        printf("%d\t", a[i]);
    }*/
    return 0;
}