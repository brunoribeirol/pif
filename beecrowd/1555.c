#include <stdio.h>
#include <math.h>

//defining the function (the type and the type of the arguments)
int rafael(int x, int y);
int beto(int x, int y);
int carlos(int x, int y);

int main()
{
    int N;
    scanf("%d", &N); //number of test cases

    for (int i = 0; i < N; i++)
    {
        int x, y; //gotta define inside the loop (before asking the values), otherwise would need to set the value to 0 outside the loop

        scanf("%d %d", &x, &y);

        //calculate the results of their function
        int resultadoRafael = rafael(x, y);
        int resultadoBeto = beto(x, y);
        int resultadoCarlos = carlos(x, y);
        
        if (resultadoRafael > resultadoBeto && resultadoRafael > resultadoCarlos)
        {
            printf("Rafael ganhou\n");
        }
        else if (resultadoBeto > resultadoRafael && resultadoBeto > resultadoCarlos)
        {
            printf("Beto ganhou\n");
        }
        else
        {
            printf("Carlos ganhou\n");
        }  
    }

    return 0;

}

//functions to calculate the scores
int rafael(int x, int y)
{
    return pow(3 * x, 2) + pow(y, 2);
}

int beto(int x, int y)
{
    return 2 * pow(x, 2) + pow(5 * y, 2);
}

int carlos(int x, int y)
{
    return -100 * x + pow(y, 3);
}

//beecrowd1555