#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{

    int testCases; //number of testCases
    scanf("%d", &testCases);

    getchar(); //did not undestand how does it work yet

    for (int i = 0; i < testCases; i++)
    {
        char phrase[200]; //199 + \0
        int countLetters[26] = {0};

        fgets(phrase, sizeof(phrase), stdin); //add comment HERE

        printf("%s", phrase);

        for (int i = 0; i < strlen(phrase); i++)
        {
            char ch = tolower(phrase[i]); //converting all the characters to lower case
            
            if (isalpha(ch))
            {
                /* code */
            }
            


        }
        


    }
    

    return 0;
}

//scanf("%[^\n]", phrase);

//beecrowd1 255