//PONTEIROS E FUNÇÃO SWAP (1)

#include <stdio.h>

// Function prototype for the swap function that will have the pointer *n1 and *n2 as arguments
void swap(int *n1, int *n2);

int main()
{
    int num1 = 5;
    int num2 = 10;
    int *p1; // Declare a pointer to an integer called p1
    int *p2;

    p1 = &num1; // p1 points to the memory aceess of num1
    p2 = &num2; // Assign the address of num2 to p2

    // Call the swap function to swap the values of num1 and num2
    swap(&num1, &num2);

    // Print the values of num1 and num2 after swapping
    printf("num1 = %d\n", num1); // Should now be 10 after the swap
    printf("num2 = %d\n", num2); // Should now be 5 after the swap

    return 0;
}

// Definition of the swap function
void swap(int* n1, int* n2)
{
    int temp; // Temporary variable
    temp = *n1; // Store the value pointed to by n1 in a temporary variable
    *n1 = *n2; // Copy the value pointed to by n2 to n1
    *n2 = temp; // Copy the value from the temporary variable to n2, effectively swapping the values
}

/*
swap(&num1, &num2); - The swap function is called with the memory addresses of num1 and num2 as arguments. This allows the swap function to access and modify the values of these variables in the main program scope.

The swap function receives pointers n1 and n2, which means it can access and modify the values that these pointers point to.

This effectively swaps the values of num1 and num2, which is why, after the swap function call, num1 has the value 10, and num2 has the value 5 in the main program scope.


swap(&num1, &num2); - A função swap é chamada com os endereços de memória de num1 e num2 como argumentos. Isso permite que a função swap acesse e altere os valores dessas variáveis no escopo principal do programa.

A função swap recebe os ponteiros n1 e n2, o que significa que ela pode acessar e modificar os valores para os quais esses ponteiros apontam.

Isso efetivamente troca os valores de num1 e num2, e é por isso que, após a chamada da função swap, num1 tem o valor 10 e num2 tem o valor 5 no escopo principal do programa.
*/
