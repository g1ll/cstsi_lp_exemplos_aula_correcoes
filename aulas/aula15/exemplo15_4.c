#include<stdio.h>

void exibiNumero(void);

int main(void){

    int num;
    num = 30;
    exibiNumero();
    printf("Numero (main): %d\n",num);

    getchar();
}

void exibiNumero(void){
    int num = 40;//variavel local (existe apenas na funcao)
    printf("\nNumero (exibeNumero): %d\n",num);
}//a variavel num eh destruida apos a execucao da funcao