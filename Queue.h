#ifndef FILA_H
#define FILA_H

#include "SimpleLinkedList.h"

typedef struct {
    Lnode* first;  
    Lnode* last;    
} Queue;

void Inicialize(Queue* f);

void Enqueue(Queue* f, int valor);

int Dequeue(Queue* f);

int IsEmptyQueue(Queue* f);

int FirstElement(Queue* f);

void PrintAllElements(Queue* f);

void DestructQueue(Queue* f);

#endif // FILA_H