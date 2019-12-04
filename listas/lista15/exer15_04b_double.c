#include<stdio.h>

void exibeDigitos(void);

int main(void){

    exibeDigitos();

    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeDigitos(void){
    double digito = 0.0;
    do printf(" %f ",digito++);
    while(digito<=9.0);
}