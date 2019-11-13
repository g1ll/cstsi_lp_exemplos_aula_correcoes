#include<stdio.h>
#include<stdlib.h>

int main(void){

    float nota1,nota2,media;

    system("clear");
    printf("\nInforme a primeira nota do aluno:");
    scanf("%f",&nota1);

    printf("\nInforme a segunda nota do aluno:");
    scanf("%f",&nota2);

    media = (nota1+nota2)/2;

    printf("\nA media e %.2f: ",media);

    if(media>=6)
        printf("\nPARABENS! Voce foi aprovado!");
    else
        printf("\nVoce foi REPROVADO! Estude mais.");
        
   
    return 0;
}