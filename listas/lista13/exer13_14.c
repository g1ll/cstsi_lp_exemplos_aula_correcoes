#include<stdio.h>
int main(void){
    int l=4,c=4,m[l][c],d,n;

    printf("\nm:\n");
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&m[i][j]); 

    printf("\n\nm: ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %2.1d",m[i][j]);
    }

    do{
        printf("\n\nQtd Cidades: ");
        scanf("%d",&n);
    }while(n<=0);

    int cts[n];
    d=0;
    printf("\nCidades: ");
    for(int i=0;i<n;i++){
        scanf("%d",&cts[i]);
        if(i>0){
            d+=m[cts[i]][cts[i-1]];
        }
    }

    printf("\nDistancia Total: %d",d);
    printf("\n\n\n");
    return 0;
}