#include<stdio.h>

int obtemPositivo();
float calculaSerie(int n);

int main(void){

    float valorSerie;
    int num;

    num = obtemPositivo();
    valorSerie  = calculaSerie(num);

    printf("\nValor da Serie: %f\n\n",valorSerie);

    getchar();
    return 0;
}

int obtemPositivo(){
    int n;
    do{
        printf("\nInforme um numero positivo: ");
        scanf("%d",&n);
    }while(n<=0);
    return n;
}

float calculaSerie(int t){
    float s = 0;
    for(int i=1;i<=t;i++)s+= (float) 1/i;
    return s;
}