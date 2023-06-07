#include <stdio.h>

void print_Tela(int num){
    for(int i =0;i<num;i++){
        printf("%d Abracadabra\n",i+1);
    }
}

int main(void){
    int numI;
    scanf("%d",&numI);
    print_Tela(numI);
    return 0;
}
