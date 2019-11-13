#include<stdio.h>
int main(void){
    int v[10],i;
    for(i=0;i<10;i++)v[i]=i+101;

    for(i=0;i<10;i++)printf("%d ",v[i]);
    printf("\n");
    return 0;
}