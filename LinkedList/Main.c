#include "SimpleLinkedList.h"

typedef struct teste{
    int x;
    double y;
    int z;
}Teste;


int main(void){

    int *x = malloc(sizeof(int));
    double *y = malloc(sizeof(double));
    int *z = malloc(sizeof(int));
    Teste *t = malloc(sizeof(Teste));
    *t = (Teste){45, 57.2, 42};
    *x = 45;
    *y = 57.2;
    *z = 42;

    Node* head = NULL;

    addNode(&head, x);
    addNode(&head, y);
    addNode(&head, z);
    addNode(&head, t);

    printList(head);

    return 0;
}