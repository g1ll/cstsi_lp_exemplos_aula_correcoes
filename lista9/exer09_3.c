#include<stdio.h>

int main(void){
    int i,alunos;
    float nota,media,soma=0;

    printf("\nQtd Alunos: ");
    scanf("%d",&alunos);

    for(i=0;i<alunos;i++){
        printf("\nnota: ");
        scanf("%f",&nota);
        soma=soma+nota;
    }
    media = soma/alunos;
    printf("\nmedia: %.2f\n",media);
}