#include<stdio.h>
int main(void){
    int l,c,m[10][10],vm[10],maior=0;

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

    for(int i=0;i<l;i++,maior=0){
        for(int j=0;j<c;j++)
            if(m[i][j]>maior)
                maior = m[i][j];
        
            vm[i] = maior;
    }

    printf("\n\nvm:");
    for(int i=0;i<l;i++)printf(" %d",vm[i]);

    printf("\n\n\n");
    return 0;
}