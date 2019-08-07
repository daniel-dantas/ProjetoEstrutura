typedef struct nodo Nodo;
typedef struct lista Lista;

Lista *new_Lista();

void addLista(Lista *lista,void *elemento);
int isEmptyList(Lista *lista);
int sizeList(Lista *lista);
void *getList(Lista *lista,int index);
int removeLista(Lista *lista, int index);
