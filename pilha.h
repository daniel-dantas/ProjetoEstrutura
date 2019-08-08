typedef struct nodo Nodo;
typedef struct pilha Pilha;


Pilha *new_Pilha();
void push(Pilha *pilha,void *elemento);
void *pop(Pilha *p);
int isEmptyPilha(Pilha *pilha);
void *top(Pilha *pilha);
int sizePilha(Pilha *pilha);

