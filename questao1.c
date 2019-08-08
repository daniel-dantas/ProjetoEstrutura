#include "questao1.h"
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define TAMANHO_MAX 6

void preencherPino(Pilha *p){
	int i;
	for(i = 1 ; i <= TAMANHO_MAX; i++){
		push(p, i);
	}
}


int retirarDisco(Pilha *pino){
	if(isEmptyPilha(pino)){
		printf("\nPino vazio!");
		return 0;
	}else{
		return pop(pino);
	}
}


void inserirDisco(Pilha *pino, int disco){
	if(disco > top(pino)){
		printf("\nMovimento invalido!");
	}else{
		push(pino, disco);
	}
}

void imprimirPino(Pilha *pino){
	
	Pilha *aux = new_Pilha();
	printf("|");
	while(!isEmptyPilha(pino)){
		push(aux, pop(pino));
		printf(" %d |",top(aux));
	}
	printf("\n");
	
	while(!isEmptyPilha(aux)){
		push(pino, pop(aux));
	}
	
}

void menu(){
	printf("\n============= TORRE DE HANOI ==============\n");
	
}


void torreHanoi(){
	Pilha *esq = new_Pilha();
	Pilha *cen = new_Pilha();
	Pilha *dir = new_Pilha();
	
	preencherPino(esq);
	
	imprimirPino(esq);
	imprimirPino(cen);
	imprimirPino(dir);
	imprimirPino(esq);		
}
