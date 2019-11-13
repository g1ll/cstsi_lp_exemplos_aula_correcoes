#include<stdio.h>

int main(void){
    int qtd_alunos=5,idade[qtd_alunos],i,c=0;
    float m,s;

    printf("\nIdades:");
    for(i=0;i<qtd_alunos;i++){
        scanf("%d",&idade[i]);
        s += idade[i];
    }
    m = s/qtd_alunos;
    printf("\nContando maiores...");
    for(i=0;i<qtd_alunos;i++)
        if(idade[i]>m) c++;
    printf("\nMaiores do que a media: %d\n",c);

}