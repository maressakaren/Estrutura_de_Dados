#include<stdio.h>

void maior(int a, int b){
    if(a>=b) printf("%d %d",b,a);
}

int main(void){
    int a, b;
if (scanf("%d %d",&a,&b)==2)
    {
        maior(a,b);
        if(a<b) printf("%d %d",a,b);
    }
    return 0;
    
}
