//CALCULADORA VERSÃO INICIAL

#include <stdio.h>

int main() {

    int i = 0; //inicializacao

    while (i != 5) //condicao - enquanto o usuario nao digitar 5
    {
    printf("Bem-vindo a calculadora, por favor selecione uma opcao:\n");
    printf("1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n5- Sair\n");
    scanf("%d", &i); //atualizacao

        if (i == 1)
        {
            printf("Soma\n");
        }
        else if (i == 2)
        {
            printf("Subtracao\n");
        }
        else if (i == 3)
        {
            printf("Multiplicacao\n");
        }
        else if (i == 4)
        {
            printf("Divisao\n");
        }
        else {
            if (i != 5)
            {
                printf("Operacao desconhecida. Digite novamente\n");
            }
        }

    }

    printf("Voce finalizou a operacao\n");
    
    return 0;
}