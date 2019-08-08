#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

struct nodo{
	void *elemento;
	struct nodo *proximo;
};

struct pilha{
	Nodo *topo;
};


Pilha *new_Pilha(){
	Pilha *p = (Pilha *)malloc(sizeof(Pilha));
	p->topo = NULL;
	return p;
}

void push(Pilha *pilha, void *elemento){
	
	Nodo *novo = (Nodo *) malloc (sizeof(Nodo));
	novo->elemento = elemento;
	novo->proximo = NULL;
	
	if(pilha->topo == NULL){
		pilha->topo = novo;
	}else{
		novo->proximo = pilha->topo;
		pilha->topo = novo;
	}
	
}

void *pop(Pilha *p){
	
	if(isEmptyPilha(p)){
		printf("Pilha vazia!");
		return NULL;
	}else{
		Nodo *aux = p->topo;
		p->topo = p->topo->proximo;
		void *elemento = aux->elemento;
		free(aux);
		return elemento;	
		
		
		
	}
	
}

int isEmptyPilha(Pilha *pilha){
	if(pilha->topo == NULL){
		return 1;
	}
	return 0;
}

void *top(Pilha *pilha){
	
	if(isEmptyPilha(pilha)){
		printf("Pilha vazia!");
		return NULL;
	}
	return pilha->topo->elemento;
	
}

int sizePilha(Pilha *pilha){
	int cont = 0;
	Nodo *aux;
	for(aux = pilha->topo; aux != NULL; aux = aux->proximo){
		cont++;
	}
	return cont;
}


