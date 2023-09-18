                                            //ENTENDER O QUE CADA LINHA DE CÓDIGO FAZ!!!!!!!!!!

#include <ctype.h> //Adicionado para usar as funções toUpperCase e toLowerCase
#include <stdio.h>
#include <string.h>

void trocaVogais(char *str);
int myLen(char string[]);
void myStrcat(char *str1, char *str2);

int main()
{

    char string[100];
    printf("Digite uma string: ");
    scanf(" %[^\n]", string); //%[^\n] usado para ler a string mesmo com espaços

    //Chamando a função para trocar vogais
    trocaVogais(string);
    printf("String com vogais trocadas: %s\n", string);

    int length = myLen(string); // Usando a função myLen para obter o comprimento da string
    printf("Comprimento da string: %d\n", length);

    char s1[100];
    char s2[100] = "coisa";

    printf("Digite outra string: ");
    scanf(" %[^\n]", s1);

    //Comparando as duas strings
    int result = strcmp(s1, s2);
    if (result < 0)
    {
        printf("%s vem antes de %s\n", s1, s2);
    }
    else if (result > 0)
    {
        printf("%s vem depois de %s\n", s1, s2);
    } 
    else
    {
        printf("%s e %s são iguais\n", s1, s2);
    }

    //Concatenando strings
    myStrcat(s1, s2);
    printf("String concatenada: %s\n", s1);

    char copia[100];
    strcpy(copia, s1); //Copiando uma string para outra
    printf("Cópia da string concatenada: %s\n", copia);

    char letraMaiuscula = 'a';
    char maiusculo = toupper(letraMaiuscula);
    printf("%c convertido para maiúsculo: %c\n", letraMaiuscula, maiusculo);

    char letraMinuscula = 'A';
    char minusculo = tolower(letraMinuscula);
    printf("%c convertido para minúsculo: %c\n", letraMinuscula, minusculo);

    return 0;
}

//Função que substitui as vogais por 'a' em uma string
void trocaVogais(char *str)
{

    for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                str[i] = 'a';
            }
        }
}

//Função que calcula o comprimento de uma string
int myLen(char string[])
{

    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}

//Função que concatena duas strings
void myStrcat(char *str1, char *str2)
{

    int i = myLen(str1);
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}
