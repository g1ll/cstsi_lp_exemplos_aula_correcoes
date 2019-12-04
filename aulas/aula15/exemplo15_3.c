#include<stdio.h>

void linhaDeAsteriscos(void);

int main(void){

    int i, q;
    //  * i eh uma variavel do programa "main" 
    //  * i nao eh a mesma variavel da funcao linhaDeAsterisco

    printf("\nq: ");
    scanf("%d",&q);

    for(i=0;i<q;i++){
        printf("\n");
        linhaDeAsteriscos();
    }

    getchar();
    getchar();
    
}

void linhaDeAsteriscos(void){
    int i;//variavel local (existe apenas na funcao)
    for(i=0;i<=22;i++)printf("*");
}//a variavel i eh destruida apos a execucao da funcao