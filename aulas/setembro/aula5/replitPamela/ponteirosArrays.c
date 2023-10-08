//PONTEIROS E ARRAYS

#include <stdio.h>

int main(void)
{

    int arr[5] = {1, 2, 3, 4, 1};
    int *ptr = NULL;
    int *ptr_2 = NULL;
    int *ptr_3 = NULL;

    ptr = &arr[0];
    ptr_2 = &arr[3];
    //ptr_3 = &arr[7]; // WARNING porque não existe arr[7]

    // depois ver quais eu poderia colocar nada, * e &
  
    if( *ptr < *ptr_2)
    {
        // *ptr < *ptr_2 está comparando os valores de ptr e ptr_2; 1 < 4
        // ptr < ptr_2 compara os valores de ptr e ptr_2 com base nos enderços de memória que eles apontam; ptr (arr[0]) < ptr_2 (arr[3]) 
        // &ptr < &ptr_2 está comparando os endereços de memória de ptr e ptr_2

        printf("Hello\n");

        printf("%d\n", *ptr);
        printf("%d\n", *ptr_2);

        /*
        printf("%d\n", *ptr); // imprime o valor apontado por "ptr" (o valor primeiro elemeneto de arr (arr[0])
        //printf("%d\n", ptr); // imprime o valor do endereço de memória desse primeiro elemento (arr[0]); WARNING porque %d não imprime memória corretamente
        //printf("%d\n", &ptr); // imprime o endereço de memória em que "ptr" está armazenado; WARNING porque %d não imprime memória corretamente

        printf("\n");
        
        //printf("%p\n", *ptr); // tentativa de imprimir o valor apontado por "ptr", mas "ptr" contém um valor inteiro; por isso da WARNING
        printf("%p\n", ptr); // imprime o enderço de memória onde "ptr" está armazenado; 0x16ba7f250 é o endereço de memória onde o valor apontado de "ptr" está
        printf("%p\n", &ptr); // imprime o endereço de memória de "ptr"; 0x16ba7f240 é o endereço de memória onde a própria variável ptr (o ponteiro) está armazenada na memória.
        */
    
    }

    printf("\n");
    
   printf("ptr = %p \n", ptr); // imprime o valor de ptr, o endereço de memória de arr[0]
   printf("ptr_2 = %p \n", ptr_2); // imprime o valor de ptr_2, que é o endereço de memória de arr[3]
   printf("*(ptr + 2) = %d \n", *(ptr + 2)); // imprime o valor de arr[2], porque ptr + 2 avança dois elementos no array
   printf("*(ptr) + 2 = %d \n", *(ptr) + 2); // imprime o valor de arr[0] + 2, que é 1 + 2 = 3. O operador + tem uma precedência mais alta do que o operador *
   printf("*(ptr - 1) = %d\n", *(ptr - 1)); // tenta acessar arr[-1], o que está fora dos limites do array e resultará em comportamento indefinido
   printf("*(ptr - 2) = %d\n", *(ptr - 2));

    return 0;
}