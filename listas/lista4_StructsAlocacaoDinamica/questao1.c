#include <stdio.h>
#include <string.h>

typedef struct Grocery
{
    char name[50];
    float price;
    int quantity;
} Grocery;

/*
typedef struct Product
{
    Grocery product;
    int quantity;
} Product;
*/


int main()
{
    int testCases;
    scanf("%d", &testCases);

    for (int j = 0; j < testCases; j++)
    {
        int availableProducts;
        scanf("%d", &availableProducts);

        Grocery list[availableProducts];

        for (int j = 0; j < availableProducts; j++)
        {
            scanf("%s %f]", list[j].name, &list[j].price);

            int products;
            scanf("%d", &products);

            for (int k = 0; k < products; k++)
            {
                scanf("%s %d]", list[j].name, &list[j].quantity);
            }

            
        }
    }
    
    

   
    
    return 0;
}

//beecrowd1281