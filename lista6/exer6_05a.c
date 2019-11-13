#include<stdio.h>
int main(void){
    int senha=2019,entrada,tentativas=0;

    do{
        printf("\nDigite a senha: ");
        scanf("%d",&entrada);
        if(entrada!=2019){
            printf("\nSenha Inválida!\n");
            //tentativas=tentativas+1;
            tentativas++;
            printf("\nVoce ainda tem %d tentativas!\n",
                        5-tentativas);
        }else{
            printf("\n\tACESSO PERMITIDO!!!\n");
        }
    }while(entrada!=2019 && tentativas<5);
}