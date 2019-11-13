#include<stdio.h>
#include<stdlib.h>

int main(void){

    int x,y;

    system("clear");

    printf("\nx: ");
    scanf("%d",&x);
    
    printf("\ny: ");
    scanf("%d",&y);

    if(x>0){
        if(y>0){
            printf("\n\t I");
        }else{
            printf("\n\t IV");
        }
    }else{
        if(y>0){
            printf("\n\t II");
        }else{
            printf("\n\t III");
        }
    }
    
    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();   /*Captura o enter do ultimo scanf*/
    getchar();   /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}