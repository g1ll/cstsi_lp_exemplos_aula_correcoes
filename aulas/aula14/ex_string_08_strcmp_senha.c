#include<stdio.h>
#include<string.h>

int main(void){

    char ch,senha[]="tsi@lp_sem1",entrada[20];

    printf("\nInforme a Senha:\n");
    scanf("%s",entrada);

    while(strcmp(senha,entrada)!=0){
        printf("\nSenha Incorreta!\n");
        printf("\nInforme a Senha:\n");
        scanf("\n%s",entrada);
    }
    
    printf("\nAcesso Permitido!\n");
    getchar();
    ch=getchar();
    
    printf("\n%c\n",ch);
    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}