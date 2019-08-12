
#include <stdio.h>
#include <stdlib.h>
#include "questao1.h"
#include "questao2.h"
#include "fila.h"

void menuPrincipal(){
    printf("=========== Projeto Estrutura =============\n");
    printf("============== Confronto 1 ================\n");
    printf("Desenvolvedores: Daniel, Jonas e Gabriel\n\n");
    printf("1- Torre de Hanoi\n");
    printf("2- Gerenciador de Tarefas\n");
    printf("0- Sair\n\n");
    printf("Informe um opcao: ");
}

void main(){
    int opcao;
    
    
    do{
        menuPrincipal();
        scanf("%d", &opcao);
        
        switch(opcao){
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
        
    } while (opcao != 0);

    
    
    
}
