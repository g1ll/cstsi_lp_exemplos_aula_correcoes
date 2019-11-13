#include<stdio.h>

int main(void){
    int q,r,c;

    do{
        printf("\nq:");
        scanf("%d",&q);
    }while(q<1||q>10);

    do{
        printf("\nr:");
        scanf("%d",&r);
    }while(r<1||r>10);

    int a[q],b[r],s[q+r];

    printf("\na:");
    for(int i=0;i<q;i++)scanf("%d",&a[i]);

    printf("\nb:");
    for(int i=0;i<r;i++)scanf("%d",&b[i]);

    printf("\nc:");
    scanf("%d",&c);
    while(c!=3){

        if(c==1)
            for(int i=0;i<q+r;i++)
                if(i<q)
                    s[i]=a[i];
                else
                    s[i]=b[i-q];        
        
        if(c==2)
            for(int i=0;i<q+r;i++)
                if(i<q) s[i]=b[i];
                else    s[i]=a[i-r];        

        for(int i=0;i<q+r;i++)printf(" %d ",s[i]);
        printf("\nc:");
        scanf("%d",&c);
    }

    return 0;
}