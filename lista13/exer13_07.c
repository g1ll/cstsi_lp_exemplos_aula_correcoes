#include<stdio.h>
int main(void){
    int l,c, m[10][10], menor=9999999;

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

    printf("\n\nm (original): ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %d",m[i][j]);
    }

    for(int i=0;i<l;i++,menor=10e10){
        for(int j=0;j<c;j++)
            if(m[i][j]<menor)
                menor = m[i][j];
        
        for(int j=0;j<c;j++)
            m[i][j]/= menor;

    }

    printf("\n\nm (alterada): ");
    for(int i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf(" %d",m[i][j]);
    }

    printf("\n\n\n");
    return 0;
}