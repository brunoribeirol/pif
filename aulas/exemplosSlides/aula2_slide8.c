#include <stdio.h>

int main() {
	int a;
	printf("Digite um numero de 1 a 10: ");
	scanf("%d", &a);

	if (a == 5) {
    printf("Parabens, voce acertou!\n"); 
	}
  else{
    printf("Tente novamente!\n");
	}

	return 0;
}