//BREAK

#include <stdio.h>

int main(void)
{
  
  int i;

  while(1) //Loop infinito
  {
  printf("Calculadora: selecione uma operacao\n");
  printf("1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao, 5 - sair\n");
  scanf("%d", &i);

    if(i == 1)
    {
        printf("Soma\n");
    }
    else if (i == 2)
    {
        printf("Subtracao\n");
    }
    else if(i == 3)
    {
        printf("Multiplicacao\n");
    }
    else if(i == 4)
    {
        printf("Divisao\n");
    }
    else if (i == 5)
    {
        break; //Loop acaba quando o usuario digita um valor igual a 5
    }
    else {
        printf("Operacao desconhecida\n");
    }

  }
  printf("Fim\n");
  return 0;
}