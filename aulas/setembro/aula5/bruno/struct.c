#include <stdio.h>
#include <string.h>

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

    /* 
    book Mybook;
    strcpy(myBook.title, "Django Tutorial");
    printf("Title: %s\n", myBook.title);

    myBook.year = 1925;
    */
   

    return 0;
}
