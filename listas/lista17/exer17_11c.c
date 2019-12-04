#include<stdio.h>

int tam3Nmais1(int n);

int main(void){
    int num,inicio,fim,temp,maior;

    printf("\nnum: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("\na b: ");
        scanf("%d %d",&inicio,&fim);
        if(inicio>fim){
            temp=fim;
            fim=inicio;
            inicio=temp;
        }
        maior=0;
        for(int j=inicio;j<=fim;j++){
            temp = tam3Nmais1(j);
            if(temp>maior)maior = temp;
        }
        printf("\n %d",maior);
    }
    printf("\n\n\n");
    getchar();
    return 0;
}

int tam3Nmais1(int n){
    int qtd;
    for(qtd=1;n>1;n=(n%2==0)?n/2:3*n+1) qtd++;
    return qtd;
}