#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    float x,y,media;

    system("clear");

    printf("\nX:");
    scanf("%f",&x);

    printf("\nY:");
    scanf("%f",&y);

    if(x==0){
        printf("\nNÃO ESTÁ EM NENHUM QUADRANTE");
    }else{
        if(y==0){
            printf("\nNÃO ESTÁ EM NENHUM QUADRANTE");
        }else{
            if(x>0){
                if(y>0){
                    printf("QADRANTE I");
                }else{
                    printf("QADRANTE IV");
                }
            }else{
                if(y>0){
                    printf("QADRANTE II");
                }else{
                    printf("QADRANTE III");
                }
            }
        }
    }

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}
