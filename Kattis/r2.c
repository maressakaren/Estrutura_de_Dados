#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
int main(void){
    int r1,r2,s1;
    if(scanf("%d %d",&r1,&s1)==2);
    r2=(s1*2)-r1;
    printf("%d",r2);
    return 0;
}*/

int main(void){
    int r2;
    char string[12],*r1,*s1;
    if(scanf("%[^\n]",string)==1);/*pegando números em formato de string*/
    r1 = strtok(string, " ");/*pegando o primeiro número antes do espaço*/
    s1 = strtok(NULL, " ");/*pegando o segundo número depois do espaço*/
    r2=(atoi(s1)*2-atoi(r1));/*convertendo numeros com a função atoi e resolvendo o equação*/
    printf("%d",r2);
    return 0;
}
