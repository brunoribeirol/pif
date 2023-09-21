#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int bookID;
};

int main()
{
    struct Books Book1; //Declare Book1 of type Book
    struct Books Book2; //Declare Book2 of type Book

    //book1 specification
    strcpy(Book1.title, "C Programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C Programming Tutorial");
    Book1.bookID = 6495407;

    //book2 specification
    strcpy(Book1.title, "Telecom Billing");
    strcpy(Book1.author, "Zara Ali");
    strcpy(Book1.subject, "Telecom Billing Tutorial");
    Book1.bookID = 6495700;

    return 0;
}