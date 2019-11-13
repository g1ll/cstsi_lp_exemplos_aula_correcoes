/*charset ANSI Western Windows-1252*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){

    float nota1,nota2,media;

    setlocale(LC_ALL,"Portuguese");
    system("clear");
    printf("\nInforme a primeira nota do aluno:");
    scanf("%f",&nota1);

    printf("\nInforme a segunda nota do aluno:");
    scanf("%f",&nota2);

    media = (nota1+nota2)/2;
        
    printf("\nA media é %.2f: ",media);
    if(media>=6)
        printf("\nPARABPÉNS! Você foi aprovado!");

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do último scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}