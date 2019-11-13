#include<stdio.h>

int main(void){
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("Amarelo ");

    if(a==1){
        printf("Azul ");
        printf("Verde ");
        printf("Roxo ");
    }else{
        if(b==2){
            if(c==3){
                printf("Azul ");
            }else{
                printf("Uva ");
                printf("Pera ");
            }
        }else{
            printf("Preto ");
        }
    }

    printf(" Violeta\n");

    return 0;
}