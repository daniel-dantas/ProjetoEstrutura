
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct nodo {
    void *elemento;
    struct nodo *proximo;
};

struct fila {
    Nodo *primeiro;
};

Fila *new_Fila() {
    Fila *fila = (Fila *) malloc(sizeof (Fila));
    fila->primeiro = NULL;
    return fila;
}

void enfileirar(Fila *fila, void *elemento) {
    Nodo *novo = (Fila *) malloc(sizeof (Fila));
    novo->elemento = elemento;
    novo->proximo = NULL;
    if (isEmptyFila(fila)) {
        fila->primeiro = novo;
    } else {

        Nodo *aux = fila->primeiro;

        while (aux->proximo != NULL) {
            aux = aux->proximo;
        }

        aux->proximo = novo;

    }
}

void *desenfileirar(Fila *fila) {
    if (isEmptyFila(fila)) {
        printf("\nFila vazia!");
        return NULL;
    } else {

        Nodo *aux = fila->primeiro;
        fila->primeiro = fila->primeiro->proximo;
        void *elemento = aux->elemento;
        free(aux);
        return elemento;
    }

}

int isEmptyFila(Fila *fila) {
    if (fila->primeiro == NULL) {
        return 1;
    }
    return 0;
}

