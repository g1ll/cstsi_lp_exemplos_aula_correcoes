#include<stdio.h>
int main(void){
    int l=4,c=4,m[l][c],c1,c2;

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

    printf("\n\nCidade 1: ");
    scanf("%d",&c1);
   
    while(c1>=0&&c1<c){
        printf("\nCidade 2: ");
        scanf("%d",&c2);

        printf("\nDistancia: %d",m[c2][c1]);

        printf("\n\nCidade 1: ");
        scanf("%d",&c1);
    }

    printf("\n\n\n");
    return 0;
}