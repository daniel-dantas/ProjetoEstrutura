typedef struct nodo Nodo;
typedef struct fila Fila;

Fila *new_Fila();
void enfileirar(Fila *fila, void *elemento);
int isEmptyFila(Fila *fila);
void *desenfileirar(Fila *fila);


