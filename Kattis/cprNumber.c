#include <stdio.h>
#include <stdlib.h>

char* reMOVEstr(char*striing){ /*FUNCTION TO REMOVE HYPHEEN FROM STRING*/
    for(int i = 0; i<11;i++){

        if(i>=6){

           striing[i] = striing[i+1]; /*REMOVING HYPHEN*/

        }
        
    }
    return striing;/*RETURNIN STRING WITHOUT HYPHEN*/
}
void printSUM(char*striing){

    int vet1[10]= {4,3,2,7,6,5,4,3,2,1},sum = 0,x;/*DECLARING VARIEBLES AND INTEGER VECTOR WITH NUMBERS TO BE MULTIPLIED*/

    for(int i =0;i<10;i++){

        x = ((int )(striing[i]))-48; /*CONVERTING TABLE NUMBERS ASCII TO INTEGER*/
        
        sum=sum +( x * vet1[i]);
    }
    if(sum%11==0 ) printf("1");
    else{
        printf("0");
    }
    
}

int main(void){
    char striing[11];
    scanf("%s",striing);
    printSUM(reMOVEstr(striing));
    return 0;
} 
