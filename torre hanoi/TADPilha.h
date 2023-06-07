#ifndef __TADPilha_h_
#define __TADPilha_h_
#include "elemento.h"
typedef struct Pilha *pilha;

pilha iniciaPilha();
void empilharPilha(pilha pilhaa,noh no);
noh desempilhaPilha(pilha pilhaa);
int sizePilha(pilha pilhaa);
noh ultDiscoPilha(pilha pilhaa);
void printarPilha(pilha pilhaa,char* nome);
void liberarPilha(pilha torre);
void popularPilha(pilha pilhaa,int n);



#endif 