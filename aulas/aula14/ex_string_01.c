#include<stdio.h>

int main(void){
    
    char nome[30];//string de 29 caracteres+\0

    printf("\n\tQual é o seu nome: ");
    scanf("%s",nome);//neste caso não é necessário o &

    printf("\n\t\tOlá %s !",nome);//Apenas no nome do vetor
    
    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}