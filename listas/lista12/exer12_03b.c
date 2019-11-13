#include<stdio.h>

int main(){

    int a,b,q,v[10];

    printf("\na:");
    scanf("%d",&a);

    printf("\nb:");
    scanf("%d",&b);

    do{
        printf("\nq:");
        scanf("%d",&q);
    }while(q<0||q>10);
    

    for(int i = 0;i<q;i++)
        if(i%2==0)v[i] = a;
        else v[i] = b;

    printf("\n\n");
    for(int i = 0;i<q;i++)
        printf(" %d",v[i]);

    printf("\n\n");
    return 0;
}