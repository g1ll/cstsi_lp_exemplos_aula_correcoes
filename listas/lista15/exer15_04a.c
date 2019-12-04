#include<stdio.h>

void exibeAlfabeto(void);

int main(void){

    exibeAlfabeto();

    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeAlfabeto(void){
    char letra = 'A';
    do printf(" %c ",letra++);
    while(letra<='Z');
}