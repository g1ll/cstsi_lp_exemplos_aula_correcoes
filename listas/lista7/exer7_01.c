#include<stdio.h>

int main(void){
    int op,apro=0;
    float  nota1,nota2,media;

    do{
        printf("\nInforme a n1:");
        scanf("%f",&nota1);
        printf("\nInforme a n2:");
        scanf("%f",&nota2);
        media = (nota1+nota2)/2;
        if(media>=6){ 
            apro++;
        }
        printf("\nA média é: %f",media);
        printf("\nCalcular a média de outro aluno 1.Sim 2.Não?");
        scanf("%d",&op);
    }while(op==1);
    printf("\n\n\tQuantidade de Aprovados: %d\n\n",apro);
    return 0;
}