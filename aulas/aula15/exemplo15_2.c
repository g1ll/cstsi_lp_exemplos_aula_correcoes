#include<stdio.h>

void linhaDeAsteriscos(void);

int main(void){

    linhaDeAsteriscos();    
    
    printf("\nIFSUL\n");
    
    linhaDeAsteriscos();
    
    printf("\nTSI\n");
    printf("\nLogica de Programacao\n");
    
    linhaDeAsteriscos();
    
    printf("\nAluno: Fulano\n");

    linhaDeAsteriscos();
    
    getchar();
    
}

void linhaDeAsteriscos(void){
    for(int i=0;i<=22;i++)printf("*");
}