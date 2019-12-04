#include<stdio.h>

float calculaSerie(int n);

int main(void){

    float termo;

    termo = calculaSerie(4);
    printf("\ntermo = %.2f",termo);
    getchar();
    return 0;
}

float calculaSerie(int n){
    float s = 0;
    for(int i=1;i<=n;i++)s+= (float) 1/i;
    return s;
}