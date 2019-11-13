#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n1,n2,n3;

    system("clear");

    printf("\nn1: ");
    scanf("%d",&n1);
    
    printf("\nn2: ");
    scanf("%d",&n2);
    
    printf("\nn3: ");
    scanf("%d",&n3);
    
    if(n1>n2){
        if(n2>n3){
            printf("\n\t%d %d %d",n3,n2,n1);
        }else{
            if(n1>n3)
                printf("\n\t%d %d %d",n2,n3,n1);
            else
                printf("\n\t%d %d %d",n2,n1,n3);
        }
    }else{
        if(n1>n3){
            printf("\n\t%d %d %d",n3,n1,n2);
        }else{
            if(n3>n2)
                printf("\n\t%d %d %d",n1,n2,n3);
            else
                printf("\n\t%d %d %d",n1,n3,n2);
        }
    }
    
    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();   /*Captura o enter do ultimo scanf*/
    getchar();   /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}