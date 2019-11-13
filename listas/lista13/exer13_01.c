#include<stdio.h>

int main(void){

    int n=4,m[n][n],soma=0,i,j;

    printf("\nLer Matriz M: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            printf("\n[%d,%d] :",i,j);
            scanf("%d",&m[i][j]);
        }

    printf("\nMatriz m:");
    for(i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<n;j++)
            printf("%2.1d ",m[i][j]);
    }

    printf("\n\nSomas:\n");
    
    printf("\n\ta): ");
    for(j=0,soma=0;j<n;j++)soma+=m[2][j];
    printf("%2.1d",soma);

    printf("\n\tb): ");
    for(i=0,soma=0;i<n;i++)soma+=m[i][1];
    printf("%2.1d",soma);

    printf("\n\tc): ");
    for(i=0,soma=0;i<n;i++)
                soma+=m[i][i];
    printf("%2.1d",soma);

    printf("\n\td): ");
    
    // for(i=0,j=n-1,soma=0;i<n;i++,j--)soma+=m[i][j];
    for(i=0,soma=0;i<n;i++)soma+=m[i][n-1-i];
    printf("%2.1d",soma);

    printf("\n\te): ");
    for(i=0,soma=0;i<n;i++)
        for(j=0;j<n;j++)
               soma+=m[i][j];
               
    printf("%2.1d",soma);

    printf("\n\n\n");
}