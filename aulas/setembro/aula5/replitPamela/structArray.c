//STRUCT ARRAY

#include<stdio.h>
#include<string.h>
#define MAX 5

typedef struct
{
    char name[20];
    int ID;
    float grade;
} student;

int main()
{
    student arrayStudent[MAX];
    int i;

    for(i = 0; i < MAX; i++ )
    {
        printf("Enter details of student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", arrayStudent[i].name);

        printf("Enter your ID: ");
        scanf("%d", &arrayStudent[i].ID);

        printf("Enter grade: ");
        scanf("%f", &arrayStudent[i].grade);

        printf("\n");
    }

    printf("Name\tID\tGrade\n"); //primeira coluna da tabela

    for(i = 0; i < MAX; i++ )
    {
        printf("%s\t %d\t %.2f\n",
        arrayStudent[i].name, arrayStudent[i].ID, arrayStudent[i].grade);
    }

    //signal to operating system program ran fine
    return 0;
}