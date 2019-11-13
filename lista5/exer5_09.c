#include<stdio.h>
#include<stdlib.h>

int main(void){

    float alt,peso;
    const float PESO_MIN = 70,
                PESO_MAX = 80,
                ALT_MIN  = 1.70,
                ALT_MAX  = 1.9;
    
    system("clear");
    
    printf("\nInforme a altura (m): ");
    scanf("%f",&alt);

    printf("\nInforme o seu Peso (Kg): ");
    scanf("%f",&peso);

    if(peso >= PESO_MIN && peso <= PESO_MAX 
                && alt >= ALT_MIN && alt <= ALT_MAX){
        printf("\n\tAceito!\n");
    }else{
        if(peso < PESO_MIN || peso > PESO_MAX){
            if(alt < ALT_MIN || alt > ALT_MAX){
                printf("\n\tTotalmente Recusado!\n");
            }else{
                printf("\n\tRecusado por Peso!\n"); 
            }
        }else{
            printf("\n\tRecusado por Altura!\n"); 
        }
    }

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();      /*Captura o enter do �ltimo scanf*/
    getchar();      /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}