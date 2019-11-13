#include<stdio.h>
int main(void){
    int l,c,m[10][10],mt[10][10],vp[10],c1,c2,c_vp=0;

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
            printf(" %2.1d",m[i][j]);
    }
   
   for(int j=0;j<c;j++)
       for(int i=0;i<l;i++)
           mt[j][i] = m[i][j];

   printf("\n\nm': ");
    for(int i=0;i<c;i++){
        printf("\n");
        for(int j=0;j<l;j++)
            printf(" %2.1d",mt[i][j]);
    }

    printf("\n\n\n");
    return 0;
}