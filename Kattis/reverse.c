#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n, *lst;
    if(scanf("%d",&n)==1);
    lst=(int*)calloc(n,sizeof(int)); /*Alocando memória*/
    for(int i=0;i<n;i++){ /*preenchendo a lista*/
        scanf("%d",&lst[i]);/
    }
    for(int i=n-1;i>=0;i--){ /*percorrendo a lista de trás para frente*/
        printf("\n%d",lst[i]);/*printando número*/
    }
    free(lst);/*Liberando memória*/
    return 0;
}
