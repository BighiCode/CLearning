#ifndef SIMPLELINKEDLIST_H
#define SIMPLELINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int value;
    struct NODE* prox;
} Lnode;

Lnode *CreateList();

int IsEmptyList(Lnode *list);

Lnode *CreateNode(int value);

void *InsertNodeInTheList(Lnode **head, Lnode *no);

Lnode *SearchElementNode(Lnode *list, int value);

Lnode *SearchElementNodeByPosition(Lnode *list, int position);

int InsertInPositionX(Lnode **list, Lnode *newNode, int postion);

Lnode *RemovePosition(Lnode **list, int position);

void PrintList(Lnode *list);

#endif