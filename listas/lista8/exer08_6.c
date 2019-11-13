#include<stdio.h>

int main(void){

    int a,i;
    printf("A: ");
    scanf("%d",&a);
    for(i=1;i<=20;i+=a)
        printf(" %d ",i);

    printf("\n\n");
}