/*
Crie um enum chamado EstadosDoJogo que represente os estados de um jogo (Início, Pausado, Jogando, Fim) e escreva um programa que simule o estado de um jogo.
O programa deve permitir ao usuário alternar entre os estados e imprimir uma mensagem correspondente para cada estado.
*/

#include <stdio.h>

typedef enum game {
    start = 10,
    paused,
    playing,
    end
} game;

int main()
{
    printf("Print how many times you wanna run the game: ");
    int testCases;
    scanf("%d", &testCases);

    game choices;

    for (int i = 0; i < testCases; i++)
    {
        printf("Chose your choice of your game: \n");
        scanf("%d", &choices);

        switch (choices)
        {
            case start: //or 10
                printf("The game has started\n");
                break;
            case paused: //or 11
                printf("The game is paused\n");
                break;
            case playing:
                printf("You are playing the game\n");
                break;
            case end:
                printf("You ended the game\n");
            default:
                printf("Try again!\n");
                break; //works like continue on this case??
        }
    }
    
    return 0;
}