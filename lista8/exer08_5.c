#include<stdio.h>
int main(){
    int n;
    printf("\nn: ");
    scanf("%d",&n);

    for (int i=0;i<10;i++)
        printf(" %d",n);
    
    printf("\n");
    return 0;
}