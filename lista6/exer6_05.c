#include<stdio.h>
int main(void){
    int senha=2019,entrada;

    do{
        printf("\nDigite a senha: ");
        scanf("%d",&entrada);
        if(entrada!=2019)
            printf("\nSenha Inválida!");
    }while(entrada!=2019);

    printf("\n\tACESSO PERMITIDO!!!\n");
    
}