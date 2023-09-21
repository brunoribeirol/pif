//PONTEIROS E ARRAYS

#include <stdio.h>

int main(void)
{

    int arr[5] = {1, 2, 3, 4, 1};
    int *ptr;
    int *ptr_2;

    ptr = &arr[2]; //ponteiro aponta para o elemento do meio
    ptr_2 = &arr[0];
            
    if( ptr < ptr_2)
    {
        printf("Hello\n");
    }
    
    printf("ptr = %p \n", ptr); 
    printf("ptr_2 = %p \n", ptr_2);   
    printf("*(ptr + 2) = %d \n", *(ptr + 5)); 
    printf("*(ptr) + 2 = %d \n", *(ptr) + 2); 
    printf("*(ptr - 1) = %d\n", *(ptr - 1));
    printf("*(ptr - 2) = %d\n", *(ptr - 2)); 


    return 0;
}