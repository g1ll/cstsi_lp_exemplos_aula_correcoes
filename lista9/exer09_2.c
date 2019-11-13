#include<stdio.h>

int main(void){
    int i,alunos;
    float nota,media=0;

    printf("\nQtd Alunos: ");
    scanf("%d",&alunos);

    for(i=0;i<alunos;i++){
        printf("\nnota: ");
        scanf("%f",&nota);
        media+=nota;
    }
    media/=alunos;
    printf("\nmedia: %.2f\n",media);
}