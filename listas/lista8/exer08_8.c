#include<stdio.h>
int main(){
    int n;
    do{
        printf("\nn: ");
        scanf("%d",&n);
    }while(n<1);

    for(int i=1;i<=n;i++)
        printf(" %d",i);
    
    printf("\n");
    return 0;
}