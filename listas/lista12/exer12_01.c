#include<stdio.h>

int main(void){

    int x, v[10];

    scanf("%d",&x);
    for(int i=0;i<10;i++){
        v[i]=x;
        printf(" %d ",v[i]);
    }
    printf("\n");
    return 0;
}