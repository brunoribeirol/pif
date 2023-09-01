#include <stdio.h>


int main() {

	int a;

	printf("Digite um numero de 0 a 10: ");
	scanf("%d", &a);

	int soma, i;

	soma = 0;

	for (i = 0; i <= a; i++) // O = faz com que inclua valor de "a" na soma
	{
		soma = soma + i;
	}

	printf("A soma dos %d primeiros numeros eh %d", a, soma);

	return 0;
}