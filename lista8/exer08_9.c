#include<stdio.h>
int main(){
    int n,r;

    printf("\nr: ");
    scanf("%d",&r);
    while (r>0)
    {
        printf("\nn: ");
        scanf("%d",&n);
        for(int i=0;i<r;i++)
                printf(" %d",n);
        printf("\nr: ");
        scanf("%d",&r);
    }
        
}