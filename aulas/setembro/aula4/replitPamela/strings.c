//STRINGS

                                            //ENTENDER O QUE CADA LINHA DE CÓDIGO FAZ!!!!!!!!!!

#include <stdio.h>
#include <string.h>

int myStrcmp(char *str1, char *str2);
int myStrlen(char *str1);

int main(void)
{

  //Diferentes maneiras de definir strings 
  char cor[100] = "azul";
  char *corPtr = "azul";
  char cor2[] = {'a','z','u','l','\0'};
  char c;

  //strcat(strDest, strOrg) = string destino tem a concatenação completa
  char *str, *newCor = "escuro";
  str = strcat(cor," ");
  str = strcat(str, newCor);

  printf("Resultado concatenacao = %s\n", str);
  
  //strlen = Cálculo do tamanho da string (número de caracteres)
  printf("Tamanho concatencao %lu\n", strlen(str));
  printf("Novo tamanho concatencao %d\n\n", myStrlen(str));

  //strcpy(strDest, strOrg) = string de origem é copiada na string de destino
  //Tanto em strcat quanto strcpy, a string de destino precisa ter espaco suficiente para armazenar o resultado final
  strcpy(str,"verde");
  printf("Resultado da copia = %s\n", str);
  printf("Tamanho da copia %lu\n", strlen(str));

  //strcmp(str1, str2) = 0 se as strings forem iguais, diferente caso contrário
  printf("Comparacao de duas strings iquais %d\n", strcmp(cor2, corPtr));

  //string1 tem caracteres com valores menores que string 2 (em ordem alfabética)
  printf("Comparacao de duas string diferentes %d\n", strcmp(corPtr, newCor));

  //printf("****** my comp: %d\n", myStrcmp("amarelo","azul"));

  //string1 tem caracteres com valores maiores que string 2
  //printf("Comparacao de duas string diferentes %d\n", strcmp(newCor, corPtr));

  //Exemplo de uso do getchar*/
  //printf("Digite um caractere\n");
  c = getchar();
  putchar(c); //Imprimindo caractere
  printf("\n");
  printf("%d\n",c);//Imprimindo codigo ASCII

  return 0;
}

//Função para verificar se duas strings são iguais ou não
int myStrcmp(char *str1, char *str2)
{

    int count = 0; 

    for(int i = 0; str1[i] != '\0' || str2[i]!= '\0'; i++)
    {
        if(str1[i] < str2[i])
        {
            count--;
            break;
        }
        else if(str1[i] > str2[i])
        {
            count++;
            break;
        }
        else
        {
            continue;
        }
    }
    return count;
}

//Função para contar o tamanho total de uma string
int myStrlen(char *str1)
{
    
    int count = 0;

    for(int i = 0; str1[i]!= '\0'; i++)
    {
        if(str1[i] != ' ')
        {
        count++;
        }
    }

    return count;
}