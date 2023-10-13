#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Grocery
{
    char name[50];
    float price;
    int quantity;
} Grocery;

int main()
{
    int testCases;
    scanf("%d", &testCases);

    for (int i = 0; i < testCases; i++)
    {
        int availableProducts;
        scanf("%d", &availableProducts);

        Grocery* list = (Grocery*)malloc(availableProducts * sizeof(Grocery));

        for (int j = 0; j < availableProducts; j++)
        {
            scanf("%s %f", list[j].name, &list[j].price);
        }

            int productsToBuy;
            scanf("%d", &productsToBuy);

            float totalCost = 0.0;

            for (int k = 0; k < productsToBuy; k++)
            {
                scanf("%s %d", list[k].name, &list[k].quantity);

                for (int j = 0; j < availableProducts; j++)
                {
                    if (strcmp(list[k].name, list[j].name) == 0)
                    {
                        totalCost += list[j].price * list[k].quantity;
                        break;
                    }
                }
            } 
        printf("R$ %.2f\n", totalCost);
        free(list);
    }

    return 0;
}

//beecrowd1281