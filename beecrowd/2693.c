#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Students
{
    char name[20];
    char region;
    int price;    
} Students;

int studentsComparison(const Students* a, const Students* b);

int main()
{
    int quantityStudents;

    while (scanf("%d", &quantityStudents) != EOF)
    {
        Students* student = (Students*)malloc(quantityStudents * sizeof(Students)); // Allocate memory to store student data

        for (int i = 0; i < quantityStudents; i++)
        {
            scanf("%s %c %d", student[i].name, &student[i].region, &student[i].price); 
        }
        
        //Bubble Sort
        for (int i = 0; i < quantityStudents - 1; i++) // -1 largest studnet is already in the correct position
        {
            for (int j = 0; j < quantityStudents - i - 1; j++) // Compare the current studnet with the next one to see if they are in the correct order
            {
                if (studentsComparison(&student[j], &student[j + 1]) > 0) // If result > 0 means that the student at the moment should be later than the next one
                {
                    Students temp = student[j];
                    student[j] = student[j + 1]; //Change students positions
                    student[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < quantityStudents; i++)
        {
            printf("%s\n", student[i].name);
        }

        free(student); // Free allocated memeoyr
           
    }
    return 0;
}

int studentsComparison(const Students* a, const Students* b)
{
    int result = a -> price - b -> price;
    if (result == 0) // Price is the same
    {
        result = a -> region - b -> region;
        if (result == 0) // Region is the same
        {
            result = strcmp(a -> name, b -> name);
        }
    }
    return result;
}

//beecrowd2693



/*
O primeiro loop for com a variável i é usado para percorrer a lista de estudantes várias vezes, comparando e movendo os estudantes em ordem crescente. Começa com i igual a zero e vai até i ser menor que quantityStudents - 1. O '-1' se deve ao fato de que, quando a última iteração é realizada, o estudante mais alto já estará na posição correta.

O segundo loop for aninhado com a variável j deve começar com j igual a zero e ir até j ser menor que quantityStudents - i - 1. O -1 é necessário para comparar o estudante na posição j com o estudante na posição j + 1, indo até o último elemento da parte não classificada da lista. Isso ocorre porque, após cada iteração do loop for externo, o maior estudante já estará na posição correta, e não é necessário compará-lo novamente.

A condição if verifica se o resultado da função studentsComparison para os estudantes nas posições j e j + 1 é maior que zero. Se isso for verdade, significa que o estudante na posição j deve ser trocado com o estudante na posição j + 1 porque eles estão fora de ordem.

Dentro deste bloco if, ocorre a troca dos estudantes. Isso é feito criando uma variável temporária temp e copiando o estudante da posição j para temp. Em seguida, o estudante da posição j + 1 é copiado para a posição j, e finalmente, temp (que contém o estudante original de j) é copiado para j + 1. Isso efetivamente troca os estudantes nas posições j e j + 1.



int result = a->price - b->price;: Esta linha calcula a diferença dos preços entre os alunos a e b e armazena o resultado em result. Se a->price for menor que b->price, result será negativo. Se a->price for maior, result será positivo. Se ambos tiverem o mesmo preço, result será 0.

if (result == 0) { ... }: Aqui, verificamos se o resultado da comparação de preços é igual a 0, o que significa que os preços são iguais. Se forem iguais, passamos para a próxima etapa da comparação.

result = a->region - b->region;: Se o resultado da comparação de preços for igual a 0, isso significa que os preços são iguais. Agora, calculamos a diferença entre as regiões (region) de a e b. Se a->region for "menor" que b->region, result será negativo, e assim por diante.

if (result == 0) { ... }: Novamente, verificamos se o resultado da comparação de regiões é igual a 0, o que significa que os preços e as regiões são iguais. Se forem iguais, passamos para a última etapa.

result = strcmp(a->name, b->name);: Agora, comparamos os nomes dos alunos usando a função strcmp, que compara duas strings. Se a->name for "menor" que b->name (alfabeticamente), result será negativo. Se a->name for "maior", result será positivo. Se ambos os nomes forem iguais, result será 0.

Portanto, no final, result conterá um valor que reflete a ordem desejada: primeiro pela diferença de preços, depois pela região e, finalmente, pelo nome. Isso atende aos critérios de ordenação que você especificou. Se result for negativo, significa que a deve vir antes de `b na ordenação, se for positivo, o contrário, e se for 0, eles são considerados iguais para fins de ordenação.
*/