#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n1,n2,media;

    system("clear");

    printf("\nNota 1:");
    scanf("%f",&n1);

    printf("\nNota 1:");
    scanf("%f",&n2);

    media = (n1+n2)/2;
    
    printf("\nMedia: %.2f",media);

    if(media>=6){
        printf("\nAPROVADO!\n");
    }else{
        if(media>=3)
            printf("\nEM EXAME!\n");
        else
            printf("\nREPROVADO!\n");
    }

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do ultimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}