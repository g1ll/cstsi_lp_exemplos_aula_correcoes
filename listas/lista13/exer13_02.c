#include<stdio.h>

int main(void){
    int l=3,c=5,
        a[l][c],
        b[l][c],
        s[l][c],
        d[l][c];

    printf("\na:\n ");
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    printf("\nb: ");
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }

    printf("\nMatriz A:\n ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %2.1d",a[i][j]);
    }

    printf("\n\nMatriz B:\n ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %2.1d",b[i][j]);
    }
    
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            s[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("\n\nMatriz S %%:\n ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %2.1d",s[i][j]);
    }       

    printf("\n\nMatriz D:\n ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %2.1d",d[i][j]);
    }

    printf("\n\n\n");
    return 0;
}