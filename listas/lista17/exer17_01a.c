#include<stdio.h>

int maiorNumer(int a,int b);

int main(void){

    int n1=5,n2=10;
    printf("\nentre %d e %d maior eh %d",
        n1,
        n2,
        maiorNumer(n1,n2));
    printf("\n\n\n");
    return 0;
}

int maiorNumer(int a,int b){
    int maior=-1;
    if(a>b)
        maior=a;
    else 
        if(b>a) 
            maior=b;
    return maior;
}