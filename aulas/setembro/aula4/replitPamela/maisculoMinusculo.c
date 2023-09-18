//MAIÚSCULO E MINÚSCULO

#include <stdio.h>
#include <stdlib.h>

char minusculo(char ch);

int main(void)
{

    char ch;
    ch = getchar();
    printf("%c\n", minusculo(ch));

    return 0;
}

char minusculo(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {
        return (ch + 'a' - 'A'); //converte para minúsculas
    }
    else
    {
        return (ch); // mantém o mesmo caractere
    }
    
}
