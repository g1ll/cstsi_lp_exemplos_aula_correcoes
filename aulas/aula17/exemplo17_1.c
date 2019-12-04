#include<stdio.h>

float calculaSerie(int n);

int main(void){

    int termo = 4;
    float valor_serie;

    valor_serie = calculaSerie(termo);
    printf("\n %d termo = %.2f",termo,valor_serie);
    printf("\n %d termo = %.2f",5,calculaSerie(5));
    for(int i=1;i<=10;i++)
     printf("\n %d termo = %.2f",i,calculaSerie(i));
    getchar();
    return 0;
}

float calculaSerie(int n){
    float s = 0;
    for(int i=1;i<=n;i++)s+=1.0/i;
    return s;
}