#include<stdio.h>

int main(void){
    int q,r,c;

    do{
        printf("\nq:");
        scanf("%d",&q);
    }while(q<1||q>10);

    int x[q],y[q],s[2*q];

    printf("\nx:");
    for(int i=0;i<q;i++)scanf("%d",&x[i]);
    
    printf("\ny:");
    for(int i=0;i<q;i++)scanf("%d",&y[i]);

    for(int i=0,j=0,k=0;i<2*q;i++)
        if(i%2==0){
            s[i]=x[j];
            j++;
        }else{
            s[i]=y[k];
            k++;
        }
    printf("\ns:");
    for(int i=0;i<2*q;i++)printf(" %d ",s[i]);
    printf("\n");
    return 0;
}