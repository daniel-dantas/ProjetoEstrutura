#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "processos.h"

void inserirFilaDeProcessos(Fila *fila, Processo *processo){
    enfileirar(fila, processo);
}

Processo *retirarProcesso(Fila *fila){
    return desenfileirar(fila);
}

void imprimirTodosOsProcessos(Fila *fila){
    Processo *processo;
    Fila *aux = new_Fila();
    int posicaoProcesso = 1;
    
    while(!isEmptyFila(fila)){
        processo = desenfileirar(fila);
        printf("Posicao %d da fila: ", posicaoProcesso);
        imprimeprocesso(processo);
        enfileirar(aux, processo);
        posicaoProcesso++;
    }
    
    while(!isEmptyFila(aux)){
        enfileirar(fila, desenfileirar(aux));
    }
    
    
}

void menuProcessos(){
    printf("\n============= GERENCIADOR DE PROCESSOS ===============\n");
    printf("1- Inserir processo na fila\n");
    printf("2- Retirar processo com maior tempo de espera\n");
    printf("3- Imprimir processos\n");
    printf("0- Sair\n");
    printf("Informe a opcao desejada: ");
}

void processos(){
    int opcao;
    Fila *filaDeProcessos = new_Fila();
    Processo *processo;
    int identificador;
    do{
        menuProcessos();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Informe o identificador do processo: ");
                scanf("%d", &identificador);
                inserirFilaDeProcessos(filaDeProcessos, criaprocesso(identificador));
                break;
            case 2:
                if(isEmptyFila(filaDeProcessos)){
                    printf("A fila se encontra vazia!\n");
                }else{
                    processo = retirarProcesso(filaDeProcessos);
                    printf("Processo %d retirado da fila de processos\n", getIdentificadorProcesso(processo));
                }
                break;
            case 3:
                imprimirTodosOsProcessos(filaDeProcessos);
                break;
            case 0:
                break;
            default:
                printf("Opcao Incorreta!");
                break;
            
        }
        
    }while(opcao != 0);
}
