#include<stdio.h>

int tam3Nmais1(int n);

int main(void){

    printf(" %d ",tam3Nmais1(3));

    printf("\n\n\n");
    getchar();
    return 0;
}

int tam3Nmais1(int n){
    int qtd=1;
    while(n>1){
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1; 
        qtd++;
    } 
    return qtd;
}