//PONTEIRO VOID

#include <stdio.h>

int main(void)
{

    int i = 5;
    int *pi;
    float f = 3.3;
    float *pf;
    void *pv; //ponteiro generico

    pv = &i; // pv aponta para uma variável int
    pi = (int *)pv; // Converte o ponteiro 'pv' para um inteiro usando o casting (int *). Agora 'pi' aponta para o inteiro que 'pv' apontava 
    printf("%d %p %p\n", *pi, pi, pv); // Imprime o valor apontado por 'pi', o endereço de 'pi' e o endereço de 'pv' 

    pv = &f; // pv aponta para uma variável float
    pf = (float *)pv; // Converte o ponteiro 'pv' para um flaot usando o casting (float *). Agora 'pf' aponta para o float que 'pv' apontava 
    printf("%.2f %p %p\n", *pf, pf, pv); // Imprime o valor apontado por 'pf', o endereço de 'pf' e o endereço de 'pv' 

    return 0;
}

// NÃO ENTENDI MUITO BEM