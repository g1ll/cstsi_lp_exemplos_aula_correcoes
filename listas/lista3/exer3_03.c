#include<stdio.h>
#include<stdlib.h>

int main(void){

    int ld;
    float ml,resultado;

    system("clear");

    printf("\nLados:");
    scanf("%d",&ld);

    if(ld==5){
        printf("\nPENTAGONO");
    }else{
        printf("\nMedida:");
        scanf("%f",&ml);
        if(ld==4){
            printf("\nQUADRADO");
            resultado = ml*ml;
        }else{
            printf("\nTRIANGULO");
            resultado = 3*ml;
        }
        
        printf("\nresultado: %.2f",resultado);
    }


















    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}