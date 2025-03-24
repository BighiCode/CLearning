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
    if(IsEmpty(list) == 0){
      
    while (aux != NULL)
    {
        if(aux->value == value){
            return aux;
        }
        if (aux->prox != NULL)
        {
            aux = aux->prox;
        }else{
            break;
        }
        
    }

    printf("\nElement not found");
    return NULL;

    }else{
        printf("\nList is empty");
    }

}

Lnode *SearchElementNodeByPosition(Lnode *list, int position){
    if(IsEmpty(list) == 1){
        printf("\nList is empty\n");
        return NULL;
    }else{
        Lnode *aux = list;
        if(position > 0){
            for(int i = 1; i < position; i++){
                if(aux->prox != NULL){
                    aux = aux->prox;
                }else{
                    printf("Position do not exist yet");
                    return NULL;
                }
            }
            return aux;
        }else{
            return NULL;
        }
        
    }
}

int InsertInPositionX(Lnode **list, Lnode *newNode, int postion){

    Lnode *aux1 = SearchElementNodeByPosition(*list,postion), *aux2 = SearchElementNodeByPosition(*list,postion -1);

    if(aux2 == NULL){
        *list = newNode;
        newNode->prox = aux1;
        return 1;
    }else{
        if(aux1 != NULL){
            aux2->prox = newNode;
            newNode->prox = aux1;
            return 1;
        }if(aux1 == NULL){
            InsertNodeInTheList(list,newNode);
        }
    }
    return 0;
}

Lnode *RemovePosition(Lnode **list, int position){

    Lnode *aux1 = SearchElementNodeByPosition(*list, position-1);
    Lnode *toRemove = SearchElementNodeByPosition(*list, position);
    Lnode *aux2 = SearchElementNodeByPosition(*list, position+1);

    if(position == 1){
        *list = aux2;
        //free(toRemove);
        return aux2;
    }

    aux1->prox = aux2;

    return toRemove;

}

void PrintList(Lnode *list){
    if(IsEmpty(list) == 0){
        Lnode *aux = list;
        printf("\nList:\n");
        while(aux != NULL)
        {
            printf("%d ", aux->value);
            aux = aux->prox;
        }
    }else{
        printf("\nlista vazia");
    }
}