// Create 2 variables and insert the following

#include <stdio.h>
#include <string.h> //acho que esqueci

union value
{
  int reais;
  int dollars;
};

struct books
{
  char title[50];
  char author[50];
  int id;
  union value price;
};

int main()
{

    struct books Book1;
    fgets(Book1.title, 50, stdin); //scanf("%[ˆ\n]", Book1.title)
    fgets(Book1.author, 50, stdin);
    scanf("%d", &Book1.id);
    scanf("%d", &Book1.price.reais); // I wrote &price.Book1.reais
    scanf("%d", &Book1.price.dollars);

    struct books Book2;
    fgets(Book2.title, 50, stdin);
    fgets(Book2.author, 50, stdin);
    scanf("%d", &Book2.id);
    scanf("%d", &Book2.price.reais);
    scanf("%d", &Book2.price.dollars);

  return 0;
}

