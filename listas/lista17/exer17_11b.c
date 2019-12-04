#include<stdio.h>

int tam3Nmais1(int n);

int main(void){
    int num,n;

    printf("\nnum: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("\nn: ");
        scanf("%d",&n);
        printf("\n %d",tam3Nmais1(n));
    }
    printf("\n\n\n");
    getchar();
    return 0;
}

int tam3Nmais1(int n){
    int qtd;
    for(qtd=1;n>1;n = (n%2==0)?n/2:3*n+1) qtd++;
    return qtd;
}