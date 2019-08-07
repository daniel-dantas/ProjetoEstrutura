/* 
 * File:   pilha.h
 * Author: daniel
 *
 * Created on 31 de Julho de 2019, 23:02
 */

typedef struct nodo Nodo;
typedef struct pilha Pilha;

/**
 * Criação da pilha
 * 
 * @return um ponteiro para uma pilha
 */
Pilha *new_Pilha();
void push(Pilha *pilha,void *elemento);
void *pop(Pilha *p);
int isEmptyPilha(Pilha *pilha);
void *top(Pilha *pilha);

