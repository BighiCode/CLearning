#include <stdio.h>
#include <stdlib.h>
#include "SimpleLinkedList.h"
#include <string.h>

typedef struct Contas {
    int agua;
    int luz;
    int gas;
} Contas;

int main(){

    Node* head = NULL;
    Contas contas = {0, 0, 0};

    inserirNoInicio(&head, &contas);
    Contas* aux = espiar( head);

    char str1[20] = "%d %d %d";
    printf(str1, aux->agua, aux->luz, aux->gas);
    


    return 0;
}