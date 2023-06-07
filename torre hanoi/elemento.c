#include<stdio.h>
#include<stdlib.h>
#include "elemento.h"

/*ESTRUTURA QUE CONTEM O DISCO E UM PONTEIRO PARA O NOH ANTERIOR*/

typedef struct tnoh{
    info_t disco;
    struct tnoh *ant;

}tnoh;

typedef struct tnoh *noh;


/*FUNÇÃO QUE RECEBE O TIPO DO DISCO E ALOCA A ESTRUTRURA DO NOH(QUE CONTEM O DISCO) NA MEMÓRIA E RETORNA ESSE NOH PARA SER EMPILHADO*/
noh criaNoh(info_t dado){
    noh aux =(noh) malloc(sizeof(struct tnoh)); 
    if(aux == NULL){
        printf("\nMemória insuficiente\n");
        exit(1);
    }
    aux->disco= dado;
    return aux;
}


/*FUNÇÃO QUE PERCORRE  APILHA E DESALOCA CADA NOH DA MESMA*/
void destroiNoh(noh no){
    no->ant = NULL;
    free(no);
   /* for(i=0;i<sizePilha(pilhaa);i++){
        noh aux = pilhaa->topo;
        pilhaa->topo = pilhaa->topo->ant;
        free(aux);
    }*/
}

/*FUNÇÃO QUE MODIFICA O NOH ANTERIOR*/
void modificaAnteriorNoh(noh no,noh no2){
    no->ant = no2;
}

/*FUNÇÃO QUE RETORNA O NOH ANTERIOR*/
noh pegaAnteriorNoh(noh no){
    return no->ant;
}

/*FUNÇÃO QUE RETORNA O DISCO*/
info_t pegaDisco(noh no){
    return no->disco;
}