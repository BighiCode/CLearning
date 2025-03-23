#include "SimpleLinkedList.h"

Lnode *CreateList(){
    return NULL;
}

int IsEmpty(Lnode *list){
    return list == NULL ? 1 : 0;
}

Lnode *CreateNode(int value){

    Lnode *no = malloc(sizeof(Lnode));
    no->value = value;
    no->prox = NULL;

    return no;
}

void *InsertNodeInTheList(Lnode **head, Lnode *no){
    if(IsEmpty(*head) == 1){
        *head = no;
    }else{
        Lnode *aux = *head;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        no = aux->prox;
    }
}

Lnode *SearchElementNode(Lnode *list, int value){
    Lnode *aux = list;
    while (aux != NULL)
    {
        if(aux->value == value){
            return aux;
        }
        aux = aux->prox;
    }

    printf("elemento não encontrado");
    return NULL;

}
