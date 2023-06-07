#include<stdio.h>
#include<stdio.h>
#include "TADPilha.h"

/*fUNÇÃO QUE RECEBE AS PILHAS E RESOLVE A TORRE DE HANOI. INICIALMENTE MUDA OS DISCOS USANDO A TORRE "FIM" COMO AUXILIAR E DEPOIS MUDA OS DISCOS USANDO
A TORRE "MEIO" COMO AUXILIAR, SOLUCIONANDO ASSIM O PROBLEMA DA TORRE DE HANOI*/
void hanoi(int n,pilha inicio,pilha meio, pilha fim){
     if(n==0){
        return;
    }
    hanoi(n-1,inicio,fim,meio);
    empilharPilha(fim,desempilhaPilha(inicio));    
    hanoi(n-1,meio,inicio,fim);
}

/*FUNÇÃO QUE PRINTA O MOVIMENTO DOS DISCOS*/
void movimentos(int n,char*inicio, char*meio,char*fim){
    if(n==0){
        return;
    }
    movimentos(n-1,inicio,fim,meio);
    printf("Move disk %d from %s to %s\n",n,inicio,fim);
    movimentos(n-1,meio,inicio,fim);
}

/*FUNÇÃO QUE CONVERTE UMA STRING RECEBIDA POR ARGUMENTO EM UM INTEIRO*/
int funcAtoi(char*str){
    int x = 0;
    int i = 0;
    if(str[0] =='-'){
        return 0;
    }
    for(;str[i]!='\0';i++){
        x = x*10 + str[i] - '0';
    }
    return x;
}

/*FUNÇÃO QUE INICIA A EXECUÇÃO DO JOGO*/
void iniciarTorre(char *argv[], int argc){
    if(argc>1){
        if(funcAtoi(argv[1])>0){
            pilha a = iniciaPilha();
            pilha b = iniciaPilha();
            pilha c = iniciaPilha();
        
            if(argc>2 && argv[2][0]=='-' && argv[2][1]=='v'){
                printf("Solving the Tower of Hanoi with %d disks.\n",funcAtoi(argv[1]));
                printf("Initial configuration:\n");
                popularPilha(a,funcAtoi(argv[1]));
                printarPilha(a,"A");
                printarPilha(b,"B");
                printarPilha(c,"C");    

                hanoi(funcAtoi(argv[1]),a,b,c);
                
                printf("Moves:\n");
                movimentos(funcAtoi(argv[1]),"A","B","C");
                printf("Final configuration:\n");
                printarPilha(a,"A"),printarPilha(b,"B"),printarPilha(c,"C");
                liberarPilha(a),liberarPilha(b),liberarPilha(c);
                return;
            }
            
            popularPilha(a,funcAtoi(argv[1]));
            hanoi(funcAtoi(argv[1]),a,b,c); 
            liberarPilha(a),liberarPilha(b),liberarPilha(c);
        }
    }
}