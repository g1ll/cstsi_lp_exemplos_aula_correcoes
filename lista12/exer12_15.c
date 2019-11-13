#include<stdio.h>

int main(void){
    int b[10],x;

    printf("\nB:");
    for(int i=0;i<9;i++)scanf("%d",&b[i]);

    printf("\nx:");
    scanf("%d",&x);

    for(int i=8;i>=0;i--)
        b[i+1]=b[i];
    b[0]=x;
    
    printf("\nB:");
    for(int i=0;i<10;i++)printf(" %d ",b[i]);

    printf("\n");
    return 0;
}