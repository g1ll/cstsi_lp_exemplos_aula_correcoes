#include<stdio.h>
int main(void){
    int l,c,m[10][10],vp[10],c1,c2,c_vp=0;

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
            do scanf("%d",&m[i][j]); 
            while(m[i][j]<=0);

    printf("\n\nm: ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %d",m[i][j]);
    }

    do{
        printf("\n\nc1: ");
        scanf("%d",&c1);
    }while(c1<0||c1>c);

    do{
        printf("\nc2: ");
        scanf("%d",&c2);
    }while(c2<0||c2>c||c1==c2);
    
    for(int i=0;i<l;i++){
        for(int j=c1;j<=c2;j++){
            if(m[i][j]%2==0){
                vp[c_vp]=m[i][j];
                c_vp++;
            }
        }
    }

    printf("\nvp:");
    for(int i=0;i<c_vp;i++)
        printf(" %d",vp[i]);

    printf("\n\n\n");
    return 0;
}