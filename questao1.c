#include "questao1.h"
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define TAMANHO_MAX 6

void preencherPino(Pilha *p){
	int i;
	for(i = TAMANHO_MAX ; i >= 1; i--){
		push(p, i);
	}
}


int retirarDisco(Pilha *pino){
	if(isEmptyPilha(pino)){
		printf("\nPino vazio!\n");
		return 0;
	}else{
		return pop(pino);
	}
}


int inserirDisco(Pilha *pino, int disco){
	
	if(isEmptyPilha(pino)){
		push(pino, disco);
		return 1;
	}else{
		
		if(disco > top(pino)){
			printf("\nMovimento invalido!\n");
			return 0;
		}else{
			push(pino, disco);
			return 1;
		}

	}
	
	
}

void imprimirPino(Pilha *pino){
	Pilha *aux = new_Pilha();
	while(!isEmptyPilha(pino)){
		push(aux, pop(pino));
	}
	
	printf("|");
	while(!isEmptyPilha(aux)){
		push(pino, pop(aux));
		printf(" %d |",top(pino));
	}
	printf("\n");
}

void menu(Pilha *esq, Pilha *cen, Pilha *dir){
	printf("================== TORRE DE HANOI =====================\n");
		printf("Pino Esquerdo (1): ");
		imprimirPino(esq);
		printf("Pino Central (2): ");
		imprimirPino(cen);
		printf("Pino Direito (3): ");
		imprimirPino(dir);		
}


void torreHanoi(){
	Pilha *esq = new_Pilha();
	Pilha *cen = new_Pilha();
	Pilha *dir = new_Pilha();
	
	preencherPino(esq);
	int opcao;
	int valor;
	while(sizePilha(dir) < TAMANHO_MAX){
		system("cls");
		menu(esq, cen, dir);		
		printf("Informe em qual pino quer remover: ");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				
				system("cls");
				valor = retirarDisco(esq);		
				menu(esq, cen, dir);
				printf("Informe em qual pino quer adicionar: ");
				scanf("%d",&opcao);
				switch(opcao){
					case 1:
							
						if(!inserirDisco(esq, valor)){
							inserirDisco(esq, valor);	
						}
						
						break;
					case 2:
							
						if(!inserirDisco(cen, valor)){
							inserirDisco(esq, valor);	
						}
						break;
					case 3:
							
						if(!inserirDisco(dir, valor)){
							inserirDisco(esq, valor);	
						}
						break;
					default:
						break;
				}
				break;
			case 2:
				system("cls");
				
				valor = retirarDisco(cen);
				menu(esq, cen, dir);
				printf("Informe em qual pino quer adicionar: ");
				scanf("%d",&opcao);
				switch(opcao){
					case 1:
						
						if(!inserirDisco(esq, valor)){
							inserirDisco(cen, valor);	
						}
						break;
					case 2:
						
							
						if(!inserirDisco(cen, valor)){
							inserirDisco(cen, valor);	
						}
						break;
						
					case 3:
							
						if(!inserirDisco(dir, valor)){
							inserirDisco(cen, valor);	
						}
						break;
					default:
						break;
				}
				break;
			case 3:
				
				system("cls");
				valor = retirarDisco(dir);
				menu(esq, cen, dir);
				printf("Informe em qual pino quer adicionar: ");
				scanf("%d",&opcao);
				switch(opcao){
					case 1:
							
						if(!inserirDisco(esq, valor)){
							inserirDisco(dir, valor);	
						}
						break;
					case 2:
						
						if(!inserirDisco(cen, valor)){
							inserirDisco(dir, valor);	
						}
						break;
					case 3:
						
							
						if(!inserirDisco(dir, valor)){
							inserirDisco(dir, valor);	
						}
						break;
					default:
						break;
				}
				break;
			default:
				break;	
		}
		
		
	}
	
	
	
}
