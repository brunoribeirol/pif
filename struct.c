#include <stdio.h>

typedef struct book
{
    char title[50];
    char author[50];
    int year;
} book;

int main()
{
    book myBook = {"Code Monkey", "Kent Beck", 1998};

    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Year: %d\n", myBook.year);

    return 0;
}
