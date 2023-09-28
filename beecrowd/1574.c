#include <stdio.h>

int main()
{

    int totalNumbers;
    scanf("%d", &totalNumbers);

    int multiples[4] = {0};

    for (int i = 0; i < totalNumbers; i++)
    {
        int numbers;
        scanf("%d", &numbers);

        if (numbers % 2 == 0)
        {
            multiples[0]++;
        }
        if (numbers % 3 == 0)
        {
            multiples[1]++;
        }
        if (numbers % 4 == 0)
        {
            multiples[2]++;
        }
        if (numbers % 5 == 0)
        {
            multiples[3]++;
        }
    }

    printf("%d Multiplo(s) de 2\n", multiples[0]);
    printf("%d Multiplo(s) de 3\n", multiples[1]);
    printf("%d Multiplo(s) de 4\n", multiples[2]);
    printf("%d Multiplo(s) de 5\n", multiples[3]);

    return 0;
}