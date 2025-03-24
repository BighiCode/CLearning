#include "Stack.h"

void inicializar(Stack* s) {
    s->topo = NULL;
}

int estaVazia(Stack* s) {
    return s->topo == NULL;
}

void empilhar(Stack* s, int valor) {
    No* novoNo = malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->prox = s->topo;
    s->topo = novoNo;
}

int desempilhar(Stack* s) {
    if (estaVazia(s)) {
        return -1;
    }
    int valor = s->topo->valor;
    No* aux = s->topo;
    s->topo = s->topo->prox;
    free(aux);
    return valor;
}

int verTopo(Stack* s) {
    if (estaVazia(s)) {
        return -1;
    }
    return s->topo->valor;
}

void destruir(Stack* s) {
    No* aux = s->topo;
    while (aux != NULL) {
        No* proximo = aux->prox;
        free(aux);
        aux = proximo;
    }
    s->topo = NULL;
}

int topo(Stack* s){
    return s->topo->valor;
}

void liberar(Stack* s){
    destruir(s);
}