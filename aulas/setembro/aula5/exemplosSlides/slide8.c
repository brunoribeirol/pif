#include <stdio.h>
#include <string.h>

typedef struct books
{
    char title[50];
    char author[50];
    char subject[100];
    int ID;
} books;

int main()
{

    //book1 specification
    books book1 = {"C Programming", "Nuha Ali", "C Programming Tutorial", 6495407};

    printf("BOOK 1\n");

    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%s\n", book1.subject);
    printf("%d\n", book1.ID);

    printf("\n");

    books book2; //Declare book2 of type Book

    //book2 specification
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.ID = 6495700;

    printf("BOOK 2\n");

    printf("%s\n", book2.title);
    printf("%s\n", book2.author);
    printf("%s\n", book2.subject);
    printf("%d\n", book2.ID);

    return 0;
}