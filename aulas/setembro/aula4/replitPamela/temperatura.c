//TEMPERATURA

#include <stdio.h>
#include <stdlib.h>

//Protótipo ou declaração da função
float celsius(float temp); 

int main(void)
{

    float c, f;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    //Chamada da função
    c = celsius(f);
    printf("Temperatura em Celsius = %.2f\n", celsius(f));

    return 0;
}

//Descrição da função
float celsius(float temp)
{

    float c;
    c = (temp - 32.0) * 5.0 / 9.0;

    return c;
}