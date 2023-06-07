#include<stdio.h>
#include<stdlib.h>
#include "elemento.h"


/*ESTRUTURA QUE CONTEM O TAMANHO E O NOH TOPO DA PILHA*/
typedef struct Pilha{
    int tam;
    noh topo;
}Pilha;

typedef struct Pilha *pilha;

/* FUNÇÃO QUE INICIA A PILHA */
pilha iniciaPilha(){       
    pilha pontlista = (pilha)malloc(sizeof(struct Pilha));
    if(pontlista==NULL){
        printf("\nMemória insuficiente\n");

        exit(1);
    }
    pontlista->topo = NULL;
    pontlista->tam = 0;
    return pontlista;
}


/*FUNÇÃO QUE EMPILHA UM NOH NA PILHA E RECEBE COMO PARAMETRO A PILHA E O NOH QUE SERÁ EMPILHADO*/ 
void empilharPilha(pilha pilhaa,noh no){  /*FUNÇÃO QUE EMPILHA*/
    if(pilhaa!=NULL){
       modificaAnteriorNoh(no,pilhaa->topo); 
        pilhaa->topo = no;
        pilhaa->tam++;
    }
    
  }


/*FUNÇÃO QUE RECEBE UMA PILHA COMO PARAMETRO E DEVOLVE O ULTIMO NOH DA MESMA, ALTERANDO O TOPO DA PILHA PARA SER O NOH ANTERIOR*/
noh desempilhaPilha(pilha pilhaa){
    noh aux = pilhaa->topo;     /*NÓ AUX RECEBENDO O NÓ TOPO DA PILHA*/
    if(pilhaa->tam>0){
        pilhaa->topo = pegaAnteriorNoh(pilhaa->topo); /*TOPO DA PILHA RECEBENDO O NÓ ANTES DELE*/
        pilhaa->tam--;
        
    }
    return aux;
    
}


/*FUNÇÃO QUE RETORNA O TAMANHO DA PILHA*/
int sizePilha(pilha pilhaa){    /*FUNÇÃO PARA SABER O TAMANHO DA PILHA */
     return pilhaa->tam;
 
}


/*FUNÇÃO QUE RETORNA O ULTIMO NOH DA PILHA*/
noh ultDiscoPilha(pilha pilhaa){

    return (pilhaa->topo);  
}

/*FUNÇÃO PARA PRINTAR A PLIHA, AQUI A PILHA É PERCORRIDA E OS VALORES DOS DISCOS SÃO ARMAZENADOS EM UM VETOR DE INTEIROS 
PARA SEREM PRINTADOS NA ORDEM CORRETA POSTERIORMENTE*/
void printarPilha(pilha pilhaa,char* torre){
   int vet[sizePilha(pilhaa)];
    int i;
    if(pilhaa!=NULL){
       noh aux = pilhaa->topo;
        printf("%s: ",torre);
        for(i = 0; i<pilhaa->tam;i++){
            vet[i]=pegaDisco(aux);
            aux = pegaAnteriorNoh(aux);
        }
        
        for(i =pilhaa->tam-1;i>=0;i--){
            printf("%d  ",vet[i]);
        }
        printf("\n"); 
    }
   
}


/*FUNÇÃO QUE POPULA A PILHA  COM O VALOR DOS DISCOS*/
void popularPilha(pilha pilhaa,int n){  // numero de discos deve ser info_t???
    info_t i;
    if(pilhaa!=NULL){
         for(i=n;i>0;i--){
            
            empilharPilha(pilhaa,criaNoh(i));
        }
    }
}

/*FUNÇÃO UTILIZADA PARA DAR FREE NA PILHA QUE FOI ALOCADA NO INICIO DO PROGRAMA*/
void liberarPilha(pilha torre){
    int i;
    for(i = torre->tam;i<0;i--){
        destroiNoh(desempilhaPilha(torre));
    }
    free(torre);
}
