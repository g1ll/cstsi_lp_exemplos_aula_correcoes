#include<stdio.h>

int main(void){
    int i,t;
    float s=0,n;

    printf("\nt: ");
    scanf("%d",&t);
    for(i=1,n=i;i<=t;i++,n=i)
        s+=((i%2==0)?-n:n)/(n*n);

    printf("\n %f \n",s);

    return 0;
}