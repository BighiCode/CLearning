#include "SimpleLinkedList.h"

Node* criarNo(void* STRUCCTURE) {
    Node* no = malloc(sizeof(Node));
    no->data = STRUCCTURE;
    no->next = NULL;
    return no;
}

void inserirNoInicio(Node** head, void* STRUCCTURE) {
    Node* no = criarNo(STRUCCTURE);
    no->next = *head;
    *head = no;
}

void* espiar(Node* head) {
    Node* aux = head;
    if (aux != NULL) {
        return (void*)aux->data;
    }
}

void Percorrer(Node* head, char* str) {
    Node* aux = head;
    while (aux != NULL) {
        printf(str, aux);
        aux = aux->next;
    }
}



