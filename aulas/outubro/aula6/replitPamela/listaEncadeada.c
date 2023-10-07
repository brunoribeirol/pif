//LISTA ENCADEADA

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int valor;
    struct node *next;
}; //celulas da minha lista

void printList(struct node *head);
void addNode(struct node **head, int var);
void deleteNode(struct node **head);

int main(void)
{

    struct node *head = NULL;
    struct node *novo = NULL;

    //head = (struct node *)malloc(sizeof(struct node));
    //head->valor = 1; //array[0] = 1
    //head->next = NULL; //primeiro elemento da lista

    //printf("Lista encadeada\n");
    //printList(head);

    //insercao
    for(int i = 0; i < 5; i++)
    {
        addNode(&head, i + 3);
    }

    printf("Nova lista encadeada %p\n", head);
    printList(head);

    for(int i = 0 ; i < 5 ; i++)
    {
        deleteNode(&head); 
    }
    
    printf("Outra lista encadeada\n");
    printList(head);

    return 0;
}

//imprime os elementos da lista
void printList(struct node *head)
{

    struct node *n = head;
    while(n != NULL)
    {
        printf(" %d ", n -> valor);
        n = n -> next;
    }
printf("\n");
}

//insercao de elementos no final da lista
void addNode(struct node **head, int var)
{
    //verifica se lista esta vazia
    if(*head == NULL)
    {

        *head = (struct node *) malloc(sizeof(struct node));
        (*head) -> valor = var;
        (*head) -> next = NULL;
    }
    else
    {
        struct node *n = *head;
        //final da lista
        while(n->next != NULL)
        {
            n = n -> next;
        }

    n -> next = (struct node *) malloc(sizeof(struct node)); //novo
    n -> next -> valor = var;
    n -> next -> next = NULL;
    }
}

//remove elementos no final da lista
void deleteNode(struct node **head)
{
    struct node *n = *head;
    struct node *temp;

    if(*head == NULL)
    {
        printf("lista vazia\n");
        return;
    }
    else if(n -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        while(n -> next -> next != NULL)
        {
            n = n -> next;
        }
    temp = n -> next; 
    n -> next = n -> next -> next;
    free(temp);
    }
}

/*
GPT

#include <stdio.h>
#include <stdlib.h>

// Define a struct for the linked list node and create an alias with typedef
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to create a new node and return a pointer to it
Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node to the end of the linked list
void appendNode(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to delete the last node from the linked list
void deleteLastNode(Node **head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        Node *current = *head;
        Node *prev = NULL;
        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }
        free(current);
        prev->next = NULL;
    }
}

// Function to print the linked list
void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node *head = NULL;

    // Insertion
    for (int i = 0; i < 5; i++) {
        appendNode(&head, i + 3);
    }

    printf("Linked list: ");
    printList(head);

    // Deletion
    for (int i = 0; i < 5; i++) {
        deleteLastNode(&head);
    }

    printf("Updated linked list: ");
    printList(head);

    return 0;
}
*/