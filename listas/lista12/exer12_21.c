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

    int a[q],b[r],c,rep=-1;

    printf("\na:");
    for(int i=0;i<q;i++)scanf("%d",&a[i]);

    printf("\nb:");
    for(int i=0;i<r;i++)scanf("%d",&b[i]);

    int s=q+r,u[s],f=0,i=0;
    
    for(int j=0;j<q;j++,f=0){
        for(int n=0;n<i;n++){
            if(a[j]==u[n])f=1;
        }
        if(f==0){
            u[i]=a[j];
            i++;
        }
    }

    for(int j=0;j<r;j++,f=0){
        for(int k=0;k<q;k++){
            if(b[j]==a[k])f=1;
        }
        for(int n=0;n<i;n++){
            if(b[j]==u[n])f=1;
        }
        if(f==0){
            u[i]=b[j];
            i++;
        }
    }

    printf("\nu:");
    for(int n=0;n<i;n++)printf(" %d ",u[n]);
    printf("\n");
    return 0;
}