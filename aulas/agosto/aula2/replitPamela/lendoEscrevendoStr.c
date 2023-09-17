//LENDO E ESCREVENDO STRINGS

#include <stdio.h> 

int main() {

    char nome[30]; // string com 30 caracteres

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Bom dia %s\n", nome);

    return 0;
}