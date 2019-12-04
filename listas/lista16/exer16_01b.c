#include<stdio.h>

void exibeTabuada(int n);

int main(void){
    
    for(int i=1;i<=5;i++)
        exibeTabuada(i);
    
    printf("\n\n\n");
    getchar();
    return 0;
}

void exibeTabuada(int n){
    printf("\n");
    for(int i=1;i<=10;i++)
        printf("\n%d*%d=%d",i,n,i*n);
}