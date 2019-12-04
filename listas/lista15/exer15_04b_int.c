#include<stdio.h>

void exibeDigitos(void);

int main(void){

    exibeDigitos();

    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeDigitos(void){
    int digito = 30000;
    do printf(" %d ",digito++);
    while(digito<=30009);
}