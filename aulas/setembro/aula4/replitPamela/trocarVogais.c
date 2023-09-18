//TROCAR VOGAIS

                                            //ENTENDER O QUE CADA LINHA DE CÓDIGO FAZ!!!!!!!!!!


#include <stdio.h>

void trocarVogais(char *str);

int main(void)
{

    char str[] = {"o sapo nao lava o pe!"};
    printf("Original: %s\n", str);
    trocarVogais(str);
    printf("Modificada: %s\n", str);
    return 0;
}

void trocarVogais(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = 'a';
        }
    }
}
