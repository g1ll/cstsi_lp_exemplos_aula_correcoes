#include<stdio.h>

void exibePrimos(int a,int b);

int main(void){

    exibePrimos(1,11);
    printf("\n\n\n");
    getchar();
    return 0;
}

void exibePrimos(int a,int b){
    printf("\n");
    if(a>b){
        int aux = b;
        b = a;
        a = aux;
    }
    for(int i=a,c=0;i<=b;i++,c=0){
        for(int j=1;j<=i;j++)
            if(i%j==0)c++;
        if(c==2)printf(" %d ",i);
    }
    printf("\n");
}