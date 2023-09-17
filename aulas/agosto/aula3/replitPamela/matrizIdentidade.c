//MATRIZ IDENTIDADE

#include <stdio.h>

int main()
{
    int a;
    printf("Type the dimensions for your matrix\n");
    scanf("%d", &a);

    printf("You've built a matrix [%d]x[%d]\n", a, a);

    int matrix[a][a];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++) 
        {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++)
    {
        matrix[i][i]++;
    }

    printf("Identity Matrix %d x %d:\n", a, a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
          printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
