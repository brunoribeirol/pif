#include <stdio.h>

int main()
{

    union intChar
    {
        unsigned int i;
        unsigned char c[4];
    };

    union intChar input;

    printf("Digite um numero: ");
    scanf("%u", &(input.i));

    for (int i = 0; i < 4; i++)
    {
        printf("O byte %d de input é %u\n", i, input.c[i]);
    }

    printf("Digite 4 bytes: ");
    scanf("%u %u %u %u", &(input.c[0]), &(input.c[1]), &(input.c[2]), &(input.c[3]));

    printf("O numero é: %u\n", input.i);

    for (int i = 0; i < 4; i++)
    {
        printf("O byte %d de input é %u\n", i, input.c[i]);
    }

    return 0;
}