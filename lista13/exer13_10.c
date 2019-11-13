#include<stdio.h>
int main(void){
    int g[13],
        ma[13][3],
        pontos=0,
        simples=0,
        duplas=0,
        triplas=0;

    printf("\nResultado Loteria: \n");
    for(int i=0;i<13;i++)scanf("%d",&g[i]);

    printf("\nAposta:\n");
    for(int i=0;i<13;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&ma[i][j]);

    for(int i=0,c=0;i<13;i++,c=0){
        if(ma[i][g[i]-1]==1)
                pontos++;
        for(int j=0;j<3;j++){
            if(ma[i][j]==1)c++;
        }
        if(c==1)simples++;
        else if(c==2)duplas++;
        else if(c==3)triplas++;
    }

    printf("\n\nPontos: %d",pontos);
    printf("\nSimples: %d",simples);
    printf("\nDuplas: %d",duplas);
    printf("\nTriplas: %d",triplas);

    printf("\n\n\n");
    return 0;
}