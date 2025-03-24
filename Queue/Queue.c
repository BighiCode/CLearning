#include "Queue.h"

void Inicialize(Queue* f){
    if(f != NULL) {
        f->first = NULL;
        f->last = NULL;
    }
}

int IsEmptyQueue(Queue* f){
    return f->first == NULL? 1 : 0;
}

void Enqueue(Queue* f, int valor){
    
    Lnode *no = CreateNode(valor);
    if(IsEmptyQueue(f) == 1){
        f->first = no;
        f->last = no;
    }else{
        Lnode *aux = f->last;
        aux->prox = no;
        f->last = no;
    }
}

int Dequeue(Queue* f){
    Lnode *aux = f->first;
    if(aux == NULL) return -1;
    f->first = f->first->prox;
    printf("\naux: %d",aux->value);
    int value = aux->value;
    free(aux);
    return value;
    
    
}

int FirstElement(Queue* f){
    return f->first != NULL? f->first->value : -1;
}

void DestructQueue(Queue* f){
    while(f->first != NULL){
        Dequeue(f);
    }
}

void PrintAllElements(Queue* f){
    Lnode *aux = f->first;
    while(aux != NULL){
        printf("%d ",aux->value);
        aux = aux->prox;
    }
}