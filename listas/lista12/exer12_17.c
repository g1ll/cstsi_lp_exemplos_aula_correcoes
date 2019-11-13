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

    int u[q+r-c],f=0;
    
    for(int i=0;i<q+r-c;){
        for(int j=0;j<q;j++,i++){
            u[i]=a[j];
        }
        for(int j=0;j<r;j++,f=0){
            for(int k=0;k<q;k++){
                if(b[j]==a[k])f=1;
            }
            if(f==0){
                u[i]=b[j];
                i++;
            }
        }
    }

    printf("\nu:");
    for(int i=0;i<q+r-c;i++)printf(" %d ",u[i]);
    printf("\n");
    return 0;
}