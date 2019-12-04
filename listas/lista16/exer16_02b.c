#include<stdio.h>

void exibeDivisores(int n);

int main(void){
    
    for(int i=1;i<=20;i++)
        exibeDivisores(i);
    
    printf("\n\n\n");
    getchar();
    return 0;
}

void exibeDivisores(int n){
    printf("\n");
    for(int i=1;i<=n;i++)
        if(n%i==0)
            printf(" %d ",i);
    printf("\n");
}