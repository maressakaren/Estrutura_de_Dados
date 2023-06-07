#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void addAnimal(char**lst,int i,char *animal){ /*Copia o nome do animal para a lista*/
    lst[i] =(char*)calloc(21,sizeof(char));
    strcpy(lst[i],animal);
}
void freelst(char**lst,int n){/*Desaloca a matriz de strings*/
    for(int i=0;i<n;i++){
        free(lst[i]);
    }
    free(lst);

}
int main(void){
    char firstWord[21],animal[21];
    int Nr,x=0;
    char** lstAnimals;
    int alphabet[26];
    int position;
    int flag = 1;
    

    if(scanf("%[^\n]",firstWord)==1) /*usando o if para não dar Warning no Kattis*/
    if(scanf("\n%d",&Nr)==1);

    lstAnimals = (char**)calloc(Nr,sizeof(char*));/*Aloca espaço para a lista de string*/

    
    for(int i=0;i<Nr;i++){
        if(scanf("\n%[^\n]",animal)==1);/*le o nome de cada animal*/


        if(animal[0]==firstWord[strlen(firstWord)-1]) {/*Verifica se a primeira letra no nome do animal é igual a ultima letra do primeiro animal*/
            addAnimal(lstAnimals,x,animal); 
            x++; /*incrementa o tamanho da lista de animais)*/
        }

        position = ((int)(animal[0])-((int)('a')));/*converte a letra na sua posição na tabela ascii e em sua posição no alfabeto*/
        alphabet[position]=1; /*marca a primeira letra do nome do animal na sua respectiva posição no alfabeto*/
        
    }
    if(x==0){
        flag=0;
        printf("?");
        freelst(lstAnimals,x);
    }
    if(x==1){
        strcpy(animal,lstAnimals[0]);
        if(firstWord[strlen(firstWord)-1] == animal[strlen(animal)-1]){/*Verifica se a ultima letra do primeiro animal é igual a ultima letra do animal da lista*/
            flag = 0;
            printf("%s!",lstAnimals[0]);
            freelst(lstAnimals,x);
        }
    }
    if(flag==1){
        for(int i=0;i<x;i++){
            strcpy(animal,lstAnimals[i]);
            position = ((int)(animal[strlen(animal)-1])-((int)('a')));
            if(alphabet[position]!=1){/*Verifica se ultima letra do animal não está marcada no alfabeto, se não estiver significa que esse animal pode eliminar o proximo jogador*/
                flag=0;
                printf("%s!",animal);
                freelst(lstAnimals,x);
                break;
            }
        }

    }
    if(flag==1){
        printf("%s",lstAnimals[0]);
        freelst(lstAnimals,x);
    }
    
    return 0;

}
