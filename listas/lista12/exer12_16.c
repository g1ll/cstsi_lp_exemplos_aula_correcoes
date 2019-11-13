#include<stdio.h>

int main(void){
    int q,x,p,aux;

    do{
        printf("\nq:");
        scanf("%d",&q);
    }while(q<1||q>10);

    int b[q+1];
    
    printf("\nB:");
    for(int i=0;i<q;i++)scanf("%d",&b[i]);

    printf("\nx:");
    scanf("%d",&x);
    
    do{
        printf("\np:");
        scanf("%d",&p);
    }while(p<0||p>q);

    for(int i=q;i>=p;i--)
        b[i+1]=b[i];

    b[p]=x;
    
    printf("\nB:");
    for(int i=0;i<q+1;i++)printf(" %d ",b[i]);

    printf("\n");
    return 0;
}