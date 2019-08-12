#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "processos.h"


struct processo{
    int identificador;
};

Processo *criaprocesso(int identificador){
    Processo *p = (Processo *) malloc(sizeof(Processo));
    p->identificador = identificador;
    return p;
}



void imprimeprocesso(Processo *processo){
    printf("Identificador: %d\n", processo->identificador);
}

int getIdentificadorProcesso(Processo *processo){
    return processo->identificador;
}
