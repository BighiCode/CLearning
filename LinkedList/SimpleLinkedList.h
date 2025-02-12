#include <stdio.h>
#include <stdlib.h>

// Definição do nó da lista encadeada
typedef struct node {
    void *data;
    struct node *next;
} Node;

Node* criarNo(void* STRUCCTURE);
void inserirNoInicio(Node** head, void* STRUCCTURE);
void* espiar(Node* head);



