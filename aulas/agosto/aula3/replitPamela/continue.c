//CONTINUE

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  int numero, soma = 0;

  for(i = 1; i <= 4; i++)
  {
    printf("Insira um numero inteiro positivo:\n");
    scanf("%d", &numero);

    if(numero < 0) //Apenas adicionamos numeros positivos
    { 
      continue; 
    }
    else
    {
      soma += numero;
    }
  }

  printf("soma total igual a %d\n", soma);
  return 0;
}