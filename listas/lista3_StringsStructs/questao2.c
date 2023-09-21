#include <stdio.h>
#include <string.h>

int main()
{
    int testes; //numero de testes
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        int pessoasGrupo; //numero de pessoas no grupo;
        scanf("%d", &pessoasGrupo);

        char primeiroIdioma[21]; //idioma pelo primeiro usuario; minimo 1 maximo 20; seriam 20 mas tem o \0; utilizado aqui para str comparar depois

        scanf("%s", primeiroIdioma); //lê o idioma do primeiro usuário

        int mesmoIdioma = 1; //todos falam o mesmo idioma

        for (int j = 1; j < pessoasGrupo; j++) //j = 1 porque eu já li o primeiro idioma em cima
        {
            char idiomas[21];

            scanf("%s", idiomas);

            if (strcmp(primeiroIdioma, idiomas) != 0)
            {
                mesmoIdioma = 0; //pelo menos alguém fala um idioma diferente
            }    
        }

        if (mesmoIdioma) //todos falam o mesmo idioma
        {
            printf("%s\n", primeiroIdioma);
        } 
        else
        {
            printf("ingles\n"); //pelo menos uma pessoa fala um idioma diferente
        }
        
    }
    return 0;
}

//beecrowd 1581