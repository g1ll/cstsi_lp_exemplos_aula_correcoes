#include<stdio.h>

int main(void){
    char letra;

    do{
        printf("\nletra: ");
        scanf("\n%c",&letra);

        if(letra>='A'&&letra<='Z'){
            printf("Maiuscula !");
        }else if(letra>='a'&&letra<='z'){
            printf("%c",letra-32);
        }else{
            printf("Nao e letra!");
        }
    }while(letra!='@');
    
    printf("\n");
    return 0;
}