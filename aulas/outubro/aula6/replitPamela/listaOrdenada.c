#include <stdio.h>
#include <stdlib.h>

struct node {
    int valor;
    struct node *next;
}; // celulas da minha lista

void printList(struct node *head);
struct node *buscaNode(struct node *head, int var);
int buscaValor(struct node *head, int pos);
int tamanhoLista(struct node *head);
void addNode(struct node **head, int var);
void deleteNode(struct node **head, int var);

int main(void)
{

    struct node *head = NULL;
    struct node *tail = NULL; // inicializando ponteiros

    struct node *novo = NULL;
    struct node *temp = NULL;
    int valor;

    novo = (struct node *) malloc(sizeof(struct node));
    novo -> valor = 2;
    novo -> next = NULL;
    head = novo;
    tail = novo;

    printf("Linked list (Head to Tail): ");
    printList(head);

    temp = buscaNode(head, 3);
    if (temp == NULL)
    {
        printf("Elemento nao existe na lista\n");
    }

    // Inserindo três elementos na lista
    addNode(&head, 3);
    addNode(&head, 6);
    addNode(&head, 5);

    printf("Nova lista encadeada (Head to Tail): ");
    printList(head);

    printf("Tamanho atual da lista = %d\n", tamanhoLista(head));

    valor = buscaValor(head, 4);
    printf("Valor do quarto elemento da lista = %d\n", valor);

    temp = buscaNode(head, 5);
    if (temp == NULL)
    {
        printf("Elemento nao existe na lista\n");
    }
    else
    {
        deleteNode(&head, 5);
    }

    printf("Lista encadeada atualizada (Head to Tail): ");
    printList(head);

    return 0;
}

// Imprime os elementos da lista (Head to Tail)
void printList(struct node *head)
{
    struct node *n = head;
    while (n != NULL)
    {
        printf(" %d ", n -> valor);
        n = n -> next;
    }
    printf("\n");
}

// Busca um elemento específico na lista e o retorna
struct node *buscaNode(struct node *head, int var)
{
    struct node *n = head;
    while (n != NULL && n -> valor != var)
    {
        n = n -> next;
    }
    return n;
}

// Busca o valor de uma posição específica
int buscaValor(struct node *head, int pos)
{ 
    struct node *n = head;
    int count = 1;
    while (n != NULL && count < pos)
    {
        n = n -> next;
        count++;
    }
    return n -> valor;
}

// Retorna o tamanho total da lista
int tamanhoLista(struct node *head)
{ 
    struct node *n = head;
    int count = 0;
    while (n != NULL)
    {
        n = n -> next;
        count++;
    }
    return count;
}

// Inserção de elementos na lista
void addNode(struct node **head, int var)
{ 
    struct node *n = *head; // Ponteiro auxiliar
    struct node *novo = (struct node *) malloc(sizeof(struct node));
    novo -> valor = var; // Criar o novo elemento

    // Lista vazia
    if (*head == NULL)
    { 
        *head = novo;
        novo -> next = NULL;
    }
    else
    {
        // Inserir no início da lista
        if (var < (*head)->valor)
        { 
            novo -> next = *head;
            *head = novo;
        }
        else
        {
            while (n -> next != NULL && n -> next -> valor < var)
            {
                n = n -> next;
            }
            novo -> next = n -> next;
            n -> next = novo;
        }
    }
}

// Remove um elemento específico da lista
void deleteNode(struct node **head, int var)
{
    struct node *n = *head;
    struct node *temp;

    if (*head == NULL)
    {
        printf("Lista vazia\n");
        return;
    }

    // Remove o primeiro elemento
    if ((*head) -> valor == var)
    { 
        temp = *head;
        *head = (*head) -> next;
        free(temp);
        return;
    }

    while (n -> next != NULL && n -> next -> valor != var)
    {
        n = n -> next;
    }

    if (n -> next != NULL)
    {
        temp = n -> next;
        n -> next = n -> next -> next;
        free(temp);
    }
    else
    {
        printf("Elemento nao existe na lista\n");
    }
}
