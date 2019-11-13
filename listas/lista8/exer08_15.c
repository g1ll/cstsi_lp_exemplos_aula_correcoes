#include<stdio.h>
int main(void){ 
    int c1,c2,c3,total,i,pi,p;

    printf("\n%% de *: ");
    scanf("%d",&p);

    printf("\nVotos C1: ");
    scanf("%d",&c1);

    printf("\nVotos C2: ");
    scanf("%d",&c2);

    printf("\nVotos C3: ");
    scanf("%d",&c3);

    total = c1+c2+c3;
    c1 = c1*100/total;
    c2 = c2*100/total;
    c3 = c3*100/total;
    
    printf("\n");
    
    for(i=0,pi=c1/p;i<pi;i++)
        printf("*");

    printf(" %d %%\n",c1);
    
    for(i=0,pi=c2/p;i<pi;i++)
        printf("*");
    
    printf(" %d %%\n",c2);
    
    for(i=0,pi=c3/p;i<pi;i++)
        printf("*");
    
    printf(" %d %%\n\n",c3);
}
