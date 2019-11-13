#include<stdio.h>

int main(void){

    float nota,menor=10,maior=0;
    
    do{
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
    }while(nota<=10&&nota>=0);
        
    printf("\nmaior:%.2f\nmenor:%.2f\n\n",maior,menor);
    return 0;
}