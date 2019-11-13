#include<stdio.h>

int main(void){
    
    int i;
    float media=0,n;

    for(i=0;i<10;i++){
        printf("\nn: ");
        scanf("%f",&n);
        // media=media+n;
        media+=n;
    }
    media=media/i;
    printf("\nmedia: %.2f\n\n\n",media);

}