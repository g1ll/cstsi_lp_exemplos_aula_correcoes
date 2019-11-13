#include<stdio.h>

int main(void){

    int x,y;
    printf("\nX: ");
    scanf("%d",&x);
    while(x!=0){
        printf("\nY: ");
        scanf("%d",&y);
        if(y!=0){
            if(x>0&&y>0)
                printf("\n\tI");
            else
                if(x<0&&y>0)
                    printf("\n\tII");
                else
                   if(x<0&&y<0)
                        printf("\n\tIII");
                    else
                        printf("\n\tIV");

            printf("\nX: ");    
            scanf("%d",&x);
        }else{
            x=y;
        }           
    }
}