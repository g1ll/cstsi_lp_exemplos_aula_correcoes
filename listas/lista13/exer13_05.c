#include<stdio.h>
    
int main(void){

    int m[10][10],l,c,n,i,j,f;

    do{
        printf("\nl:");
        scanf("%d",&l);
    }while(l<1||l>10);

    do{
        printf("\nc:");
        scanf("%d",&c);
    }while(c<1||c>10);

    printf("\nm:\n");
    for(i=0;i<l;i++)
        for(j=0;j<c;j++)
            scanf("%d",&m[i][j]);

    printf("\nMatriz m:\n");
    for(i=0;i<l;i++){
        printf("\n");
        for(int j=0;j<c;j++)
            printf("%2.1d ",m[i][j]);
    }

    printf("\n\nn:");
    scanf("%d",&n);
    
    while(n>=0){
        f=0;
        for(i=0;i<l;i++)
            for(int j=0;j<c;j++)
                if(m[i][j]==n){
                    f=1; i=l;j=c;
                }

        if(f==1){
            printf("Esta na Matriz!");
        }else{
            printf("Nao esta na Matriz!");
        }

        printf("\nn:");
        scanf("%d",&n);
    }
    printf("\n\n\n");
    return 0;
}