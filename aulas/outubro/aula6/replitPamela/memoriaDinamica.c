//MEMÓRIA DINÂMICA

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *arr;
    // int arr[6]
    int len;

    printf("Qual o tamanho do array: \n");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));
    printf("%p\n", arr);

    printf("Quais os elementos do array:\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);

    } // leitura dos elementos

    printf("Novo array obtido\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
        printf("%p\n", (arr + i));
    } // impressao dos elementos

    free(arr);
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    } // impressao dos elementos

    return 0;
}