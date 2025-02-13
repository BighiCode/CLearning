#include "SimpleLinkedList.h"

Node* createNode(void* estrutura){
    Node* node = malloc(sizeof(Node));
    node->estrutura = estrutura;
    node->next = NULL;
    return node;
}

void addNode(Node** head, void* estrutura){
    Node* node = createNode(estrutura);
    if(*head == NULL){
        *head = node;
    }else{
        Node* aux = *head;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = node;
    }
}


void printList(Node* head){
    Node* aux = head;
    while(aux != NULL){
        printNode(aux);
        aux = aux->next;
    }
}


void printNode(Node* node){
    int i = 0;
    while (i < sizeof(node->estrutura))
    {
        printf("%c", ((char*)node->estrutura)[i]);
        i++;
        printf("\n");
    }
    
}