//ARRAYS DE PONTEIROS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NOME_MAX 30
#define TAM_MAX 100

/*Código disponível no livro Treinamento em linguagem C de Victorine Viviane, página 276*/

void ordena(char **p, int n);

int main(void)
{

    char nomes[NOME_MAX][TAM_MAX]; //usado para armazenar a entrada do usuário
    char *p[NOME_MAX]; //array de ponteiros para strings
    int n = 0;

    while(1)
    {
        printf("Digite um nome ou \\n para terminar: ");
        fgets(nomes[n], TAM_MAX, stdin);
        if (strlen(nomes[n]) == 1) break;
        p[n] = nomes[n]; //o ponteiro p recebe a string fornecida pelo usuário
        n++;
    }

    printf("\n\nLista Original: \n");
    //varrendo o array original
    for(int i = 0; i < n; i++)
    { 
        printf("%s", nomes[i]); 
    }
    ordena(p, n); //chamada da função de ordenação
    printf("\n\nLista Ordenada: \n");

    for(int i = 0; i < n; i++)
    {
        printf("%s", p[i]); //novo array de ponteiros ordenado
    }
    
    return 0;
}

void ordena(char **p, int n)
{
    char *temp;

    //linhas de strings 
    for(int i = 0; i < n - 1; i++)
    {
        //próxima linha de strings
        for(int j = i + 1; j < n; j++)
        {

            // verifica se a string da linha atual vem depois da próxima na ordem alfabética
            if(strcmp(p[i], p[j]) > 0)
            { 
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}