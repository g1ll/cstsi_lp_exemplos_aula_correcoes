#include<stdio.h>

int main(void){
    char ch;

    do{
        printf("\nch: ");
        scanf("\n%c",&ch);

        if(ch>=65&&ch<=90){
            printf("Maiuscula !");
        }else if(ch>=97&&ch<=122){
            printf("Minuscula !");
        }else if(ch>=48&&ch<=57){
            printf("Digito !");
        }else{
            printf("Sem Classificacao !");
        }
    }while(ch!=102);
    
    printf("\n");
    return 0;
}