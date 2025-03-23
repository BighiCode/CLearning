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
        aux->prox = no;
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

    printf("Element not found");
    return NULL;

}

Lnode *SearchElementNodeByPosition(Lnode *list, int position){
    Lnode *aux = list;

    for(int i = 1; i < position; i++){
        if(aux != NULL){
            aux = aux->prox;
        }else{
            printf("\nElement do not exist");
            return NULL;
        }
    }

    return aux;


}
