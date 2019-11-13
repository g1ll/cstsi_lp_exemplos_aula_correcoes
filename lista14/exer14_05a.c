#include<stdio.h>

int main(void){
    char letra;

    do{
        printf("\nletra: ");
        scanf("\n%c",&letra);

        if(letra>=65&&letra<=90){
            printf("Maiuscula !");
        }else if(letra>=97&&letra<=122){
            printf("%c",letra-32);
        }else{
            printf("Nao e letra!");
        }
    }while(letra!=64);
    
    printf("\n");
    return 0;
}