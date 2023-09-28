/*
Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de uma empresa, compostos por: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela
*/

#include <stdio.h>
#define MAX 2

typedef struct company
{
    char name[10];
    int age;
    char gender;
    char SSN[11];
    char birthday[11];
    int sector;
    char occupancy[30];
    float salary;
    float bonus;
    float finalSalary;
} company;


int main()
{

    company members[MAX];

    for (int i = 0; i < MAX; i++)
    {
        printf("MEMBER NUMBER %d\n", i + 1);

        printf("NAME\n");
        scanf("%s", members[i].name);

        printf("AGE\n");
        scanf("%d", &members[i].age);
        
        printf("GENDER\n");
        scanf(" %c", &members[i].gender); //did not understand why the space before the %c
        
        printf("SSN\n");
        scanf("%s", members[i].SSN);
        
        printf("BIRTHDAY\n");
        scanf("%s", members[i].birthday);
        
        printf("SECTOR\n");
        scanf("%d", &members[i].sector);
        
        printf("OCCUPANCY\n");
        scanf("%s", members[i].occupancy);
        
        printf("SALARY\n");
        scanf("%f", &members[i].salary);

        printf("BONUS\n");
        scanf("%f", &members[i].bonus);
        
        printf("\n");

    }

    for (int i = 0; i < MAX; i++)
    {
        printf("\n");

        printf("NAME: %s\n", members[i].name);
        printf("AGE: %d\n", members[i].age);
        printf("GENDER: %c\n", members[i].gender);
        printf("SSN: %s\n", members[i].SSN);
        printf("BIRTHDAY: %s\n", members[i].birthday);
        printf("SECTOR: %d\n", members[i].sector);
        printf("OCCUPANCY: %s\n", members[i].occupancy);
        printf("SALARY: %.2f\n", members[i].salary);
        printf("BONUS: %.2f\n", members[i].bonus);
        printf("FINAL SALARY: %.2f\n", members[i].salary + members[i].bonus);


        printf("\n");

    }

    return 0;
}