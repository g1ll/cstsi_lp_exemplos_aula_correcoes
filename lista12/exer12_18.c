#include<stdio.h>

int main(void){
    int q,r;

    do{
        printf("\nq:");
        scanf("%d",&q);
    }while(q<1||q>10);

    do{
        printf("\nr:");
        scanf("%d",&r);
    }while(r<1||r>10);

    int a[q],b[r],c;

    printf("\na:");
    for(int i=0;i<q;i++)scanf("%d",&a[i]);

    printf("\nb:");
    for(int i=0;i<r;i++)scanf("%d",&b[i]);

    c=0;
    for(int i=0;i<q;i++)
        for(int j=0;j<r;j++)
            if(a[i]==b[j])
                c++;

    int in[c];
    c=0;
    for(int i=0;i<q;i++)
        for(int j=0;j<r;j++)
            if(a[i]==b[j]){
                in[c]=a[i];
                c++;
            }

    printf("\ni:");
    for(int i=0;i<c;i++)printf(" %d ",in[i]);
    printf("\n");
    return 0;
}