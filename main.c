
#include <stdio.h>
#include <stdlib.h>
#include "questao1.h"
#include "questao2.h"
#include "fila.h"

void menuPrincipal(){
	system("cls");
    printf("=========== Projeto Estrutura =============\n");
    printf("============== Confronto 1 ================\n");
    printf("Desenvolvedores: Daniel, Jonas e Gabriel\n\n");
    printf("1- Torre de Hanoi\n");
    printf("2- Gerenciador de Tarefas\n");
    printf("0- Sair\n\n");
    printf("Informe um opcao: ");
}

void main(){
    
	int escolhido;
    do{
        menuPrincipal();
        scanf("%d", &escolhido);
        
        switch(escolhido){
            case 1:
                system("cls");
                torreHanoi();
                break;
            case 2:
                system("cls");
                processos();
                break;
            default:
                break;
        }
        
    } while (escolhido != 0);

    
    
    
}
