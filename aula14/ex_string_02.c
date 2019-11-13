#include<stdio.h>

int main(void){
    
    char nome[30];//string de 29 caracteres+\0

    printf("\n\tInforme o seu nome completo: ");
    // gets(nome);

    fgets(nome,30,stdin);//mais seguro
    
    printf("\n\tNome: %s",nome);//Apenas no nome do vetor
    
    getchar();

    printf("\n\n\n");
    return 0;
}