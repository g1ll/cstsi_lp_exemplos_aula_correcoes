#include<stdio.h>
int main(void){
    int i,q,ano;

    do{
        printf("\nq: ");
        scanf("%d",&q);
    }while(q<1||q>10);
    
    int z[q],w[q];

    for(i=0;i<q;i++)scanf("%d",&z[i]);
    
    for(i=0;i<q;i++)w[i]=z[i];
    
    for(i=0;i<q;i++)printf(" %d ",w[i]);
    
    printf("\n");

    return 0;
}