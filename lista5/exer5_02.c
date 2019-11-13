#include<stdio.h>
#include<stdlib.h>

int main(void){

    int x,y;

    system("clear");

    printf("\nX:");
    scanf("%d",&x);

    printf("\nY:");
    scanf("%d",&y);

    if(x==0 || y == 0){
        if(x==0 && y == 0){
            printf("\nOrigem\n");
        }else{
            if(x==0){
                printf("\nEixo X\n");
            }else{
                printf("\nEixo Y\n");
            }
        }
    }else{
        if(x > 0 && y > 0){
            printf("\nQuadrante I\n");
        }else{
            if(x < 0 && y > 0 ){
                printf("\nQuadrante II\n");
            }else{
                if(x<0){
                    printf("\nQuadrante III\n");
                }else{
                    printf("\nQuadrante IV\n");
                }
            }
        }
    }

    getchar();getchar();
    system("clear");
}