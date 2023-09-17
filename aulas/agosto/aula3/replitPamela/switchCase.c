//SWITCH CASE

#include <stdio.h>

int main(void)
{
    int i;
  
    while(i != 5)
    {
        printf("Calculadora: selecione uma operacao\n");
        printf("1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao, 5 - Sair\n");
        scanf("%d", &i);

        switch(i)
        {

        case 1:
            printf("Soma\n");
            break;

        case 2:
            printf("Subtracao\n");
            break;

        case 3: 
            printf("Multiplicacao\n");
            break;

        case 4:
            printf("Divisao\n");
            break;

        case 5:
            printf("Fim\n");
            break;
    
        default:
            printf("Operacao desconhecida\n");
        }
    }
    
    return 0;
}