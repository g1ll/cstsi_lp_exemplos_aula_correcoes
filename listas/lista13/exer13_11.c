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
    }while (c<0||c>10&&c%2!=0);

    printf("\nm:\n");
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
            do scanf("%d",&m[i][j]); 
            while(m[i][j]<=0);

    printf("\n\nm (original): ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %2.1d",m[i][j]);
    }
   
   for(int j=0,aux;j<c;j+=2){
       for(int i=0;i<l;i++){
           aux = m[i][j];
           m[i][j] = m[i][j+1];
           m[i][j+1] = aux;
       }
   }

   printf("\n\nm (alterada): ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %2.1d",m[i][j]);
    }

    printf("\n\n\n");
    return 0;
}