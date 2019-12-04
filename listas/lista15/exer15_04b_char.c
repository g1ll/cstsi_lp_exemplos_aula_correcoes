#include<stdio.h>

void exibeDigitos(void);

int main(void){

    exibeDigitos();

    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeDigitos(void){
    char digito = '0';
    do printf(" %c ",digito++);
    while(digito<='9');
}