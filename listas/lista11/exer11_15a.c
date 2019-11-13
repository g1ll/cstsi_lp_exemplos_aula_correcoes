#include<stdio.h>

int main(void){

    float nota,menor=10,maior=0;

    for(;nota<=10&&nota>=0;){
        printf("\nnota:");
        scanf("%f",&nota);
        if(nota<=10&&nota>=0){
            if(nota>maior){
                maior=nota;
            }
            if(nota<menor){
                menor=nota;
            }
        }
    }
    
    printf("\nmaior:%.2f\nmenor:%.2f\n",maior,menor);
    return 0;
}