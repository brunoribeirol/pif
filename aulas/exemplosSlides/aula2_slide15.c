#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero inteiro de 0 a 10: ");
	scanf("%d", &a);

	int soma = 0;
	int i;

	for (i = 0; i <= a; i++) {
		soma = soma + i;
	}
	
	printf("A soma dos %d primeiros numeros eh %d\n", a, soma);

	return 0;
}


//NAO ENTENDIII