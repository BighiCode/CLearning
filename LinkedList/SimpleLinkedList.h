#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    void* estrutura;
    struct node *next;
}Node;

Node* createNode(void* estrutura);
void addNode(Node** head, void* estrutura);
void printList(Node* head);
void printNode(Node* node);