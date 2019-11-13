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

    int a[q],b[r],c,s;

    printf("\na:");
    for(int i=0;i<q;i++)scanf("%d",&a[i]);

    printf("\nb:");
    for(int i=0;i<r;i++)scanf("%d",&b[i]);

    c=0;
    for(int i=0;i<q;i++)
        for(int j=0;j<r;j++)
            if(a[i]==b[j])
                c++;
    s=q-c;
    int d[s],f=0,n=0;
    //for(int n=0;n<s;){
        for(int i=0;i<q;i++,f=0){
            for(int j=0;j<r;j++)
                if(a[i]==b[j])
                    f=1;
            if(f==0){
                d[n]=a[i];
                n++;
            }
        }
    // }
    printf("\nd:");
    for(int i=0;i<s;i++)printf(" %d ",d[i]);
    printf("\n");
    return 0;
}