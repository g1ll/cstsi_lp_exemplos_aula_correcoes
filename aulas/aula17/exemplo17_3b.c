#include<stdio.h>

int obtemPositivo();
float calculaSerie(int n);

int main(void){
    
    printf("\nValor da Serie: %f\n\n",calculaSerie(obtemPositivo()));

    getchar();
    return 0;
}

int obtemPositivo(){
    int num;
    do{
        printf("\nInforme um numero positivo: ");
        scanf("%d",&num);
    }while(num<=0);
    return num;
}

float calculaSerie(int n){
    float s = 0;
    for(int i=1;i<=n;i++)s+= (float) 1/i;
    return s;
}