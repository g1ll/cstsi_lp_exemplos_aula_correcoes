#include<stdio.h>
#include<stdlib.h>

int main(void){
    const int SENHA = 1234;
    int senha,c=1;
    system("clear");
    printf("\nInforme a senha:\n");
    scanf("%d",&senha);
    while(senha!=SENHA){
        c++;
        system("clear");
        printf("\n\tACESSO NEGADO!\n");
        printf("\nInforme a senha:\n");
        scanf("%d",&senha);
    }
    system("clear");
    printf("\n\tACESSO PERMITIDO!\n");
    printf("\n\tNúmero de tentaticas: %d\n\n",c);
    return 0;
}