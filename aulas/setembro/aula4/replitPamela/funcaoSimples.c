//FUNÇÃO SIMPLES

#include <stdio.h>

unsigned int potencia(int a, int b);

int main(void)
{

    int a, b;
  
    printf("Digite 2 números para fazer uma potenciacao: ");
    scanf("%d %d", &a, &b);

    if (b < 0)
    {
        printf("Erro: Potência negativa não é suportada.\n"); //Não implementado para potências negativas
    }
    else
    {
        printf("%d elevado a %d é igual a %u\n", a, b, potencia(a, b));
    }

    return 0;
}

unsigned int potencia(int a, int b)
{
    
    unsigned int result = 1;
  
    for (int i = 0; i < b; i++) {
        result *= a;
    }

    return result;
}