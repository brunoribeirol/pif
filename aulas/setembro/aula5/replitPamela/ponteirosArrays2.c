//PONTEIROS E ARRAYS 2

#include <stdio.h>

int main(void)
{

    int a[15];

    //Quais os valores do array?
    for(int i = 0; i < 15; i++)
    { 
        *(a + i) = 14 - i; // *(a + i) é a mesma coisa que a[i]
    }

    for(int i = 0; i < 15; i++)
    {
        printf("%d\t", a[i]);
    }
    // 15 até 0

    printf("\n");

    //Quais os valores do array?
    for(int i = 0; i < 15; i++)
    { 
        *(a + i) = *(a + (*( a + i))); //a[i] = a[a[i]];
    }

    for(int i = 0; i < 15; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}

/*
int main() {


    int a[6] = {3, 0, 2, 1, 5, 4};

    for (int i = 0; i < 6; i++)
    {
        a[i] = a[a[i]];
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;

}

a[i] = a[a[i]]
a[0] = a[a[0]]
a[0] = a[3]
1

a[i] = a[a[i]]
a[1] = a[a[1]]
a[1] = a[0]
3

a[i] = a[a[i]]
a[5] = a[a[5]]
a[5] = a[5]
4
*/


