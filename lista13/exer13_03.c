#include<stdio.h>

int main(void){

    int n=4,m[n][n],soma=0,i,j;

    printf("\nm:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&m[i][j]);

    printf("\nMatriz m:\n");
    for(i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<n;j++)
            printf("%2.1d ",m[i][j]);
    }

    printf("\n\nSomas:\n");

    printf("\na) ");
    for(i=0,soma=0;i<n/2;i++)
        for(j=0;j<n/2;j++)
            soma+=m[i][j];
    printf("%2.1d",soma);

    printf("\nb) ");
    for(i=n-1,soma=0;i>=n/2;i--)
        for(j=n-1;j>=n/2;j--)
            soma+=m[i][j];
    printf("%2.1d",soma);

    printf("\nc) ");
    for(i=0,soma=0;i<n;i++)
        for(j=0;j<=i;j++)
            soma+=m[i][j];
    printf("%2.1d",soma);

    printf("\nd) ");
    for(i=0,soma=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            soma+=m[i][j];
    printf("%2.1d",soma);

    printf("\n\n\n\n");

    return 0;
}