/*Pedia para checar se um caracter ch estava presente na string str, se tivesse retornava
o índice na funcao, caso nao estivesse presente retornava -1*/

//Como eu fiz
int strch(char *str, char ch) {

    int tamanho = strlen(str); //acho que nao coloquei o tipo int da variavel
    
    for (int i = 0; i < tamanho; i++)
    {
        if (str[i] == ch)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

//Como era pra ter feito
int strch(char *str, char ch)
{

    int tamanho = strlen(str);
    
    for (int i = 0; i < tamanho; i++) {
        if (str[i] == ch) {
            return i; // Retorna a posição quando o caractere é encontrado
        }
    }
    
    return -1; // Retorna -1 se o caractere não for encontrado
}





