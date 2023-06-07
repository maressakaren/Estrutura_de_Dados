#include<stdio.h>

int main(void){
    int N,x=1;
    int day=0; 

    if(scanf("%d",&N));/*esse if é para não dar Warning*/
    
    if(N==1||N==2||N==2) printf("%d", N);
    
    else {
        while(x < N){
            x = x * 2;
            day++;
        }
        if(x<N) printf("%d",day+2);
    
        else{
            printf("%d",day+1);}
    }
    return 0;
}
