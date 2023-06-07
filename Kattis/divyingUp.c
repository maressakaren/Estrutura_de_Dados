#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,*lst,sum=0;
    if(scanf("%d",&n)==1);/*Usando if para não dar warning no Kattis*/
    lst=(int*)calloc(n,sizeof(int));/*Alocando memória*/
    for(int i=0;i<n;i++){
        if(scanf(" %d",&lst[i])==1);/*percorrendo lista*/
        sum+=lst[i];/*somando os números*/
    }
    if(sum%3==0) printf("yes"); /*Verificando se a soma dos números é divisível por 3*/
    else{
        printf("no");
    }
    free(lst);/*Liberando memória*/

    return 0;
}
