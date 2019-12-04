#include<stdio.h>

void linhaDeAsteriscos(void);
void retAsterisco(void);

int main(void){

    retAsterisco();
    printf("\n\tIFSUL");
    retAsterisco();

    getchar();
    return 0;
}

void linhaDeAsteriscos(void){
    int i;//variavel local (existe apenas na funcao)
    for(i=0;i<=22;i++)printf("*");
}//a variavel i eh destruida apos a execucao da funcao


void retAsterisco(void){
    for(int  i=0;i<3;i++){
        printf("\n");
        linhaDeAsteriscos();
    }
}