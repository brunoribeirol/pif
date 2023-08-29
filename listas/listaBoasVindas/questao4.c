#include <stdio.h>

int main() {

    int numeros, senha;

    senha = 2002;

    do
    {
        scanf("%d", &numeros);

        if (numeros == senha) {
        printf("Acesso Permitido\n");
        }

        else {
        printf("Senha Invalida\n");
        }

    } while (numeros != 2002);

    return 0;
}

//beecrowd1114