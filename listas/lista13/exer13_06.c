#include<stdio.h>
int main(void){
    int l,c,m[10][10],sl[10],sc[10];

    do{
        printf("\nl:");
        scanf("%d",&l);
    }while (l<0||l>10);

    do{
        printf("\nc:");
        scanf("%d",&c);
    }while (c<0||c>10);

    printf("\nm:\n");
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&m[i][j]);

    for(int i=0;i<l;i++){
        sl[i]=0;
        for(int j=0;j<c;j++)
            sl[i]+= m[i][j];
    }

    for(int j=0;j<c;j++){
        sc[j]=0;
        for(int i=0;i<l;i++)
            sc[j]+= m[i][j];
    }

    printf("\n\nsl: ");
    for(int i=0;i<l;i++)printf(" %d",sl[i]);

    printf("\nsc: ");
    for(int i=0;i<c;i++)printf(" %d",sc[i]);

    printf("\n\n\n");
    return 0;
}