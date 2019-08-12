typedef struct processo Processo;
Processo *criaprocesso(int identificador);
void imprimeprocesso(Processo *processo);
int getIdentificadorProcesso(Processo *processo);
