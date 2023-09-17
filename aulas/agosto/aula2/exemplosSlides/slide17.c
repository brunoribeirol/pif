#include <stdio.h>

int main() {

    int a;

    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &a);

    int i = 0;
    int soma = 0;

    while (i <= a) // O = faz com que inclua valor de "a" na soma
    {
        soma = soma + i;
        i++;
    }

    printf("A soma dos %d primeiros numeros eh %d\n", a, soma);
    
    return 0;
}