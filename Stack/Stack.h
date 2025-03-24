#ifndef Pile_h
#define Pile_h

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da pilha
typedef struct No {
    int valor;
    struct No* prox;
} No;

// Estrutura da pilha
typedef struct {
    No* topo;
} Stack;

// Função para inicializar a pilha
void inicializar(Stack* s);

// Função para verificar se a pilha está vazia
int estaVazia(Stack* s);

// Função para empilhar um elemento
void empilhar(Stack* s, int valor);

// Função para desempilhar um elemento
int desempilhar(Stack* s);

// Função para ver o topo da pilha sem remover
int topo(Stack* s);

// Função para liberar a pilha
void liberar(Stack* s);

#endif