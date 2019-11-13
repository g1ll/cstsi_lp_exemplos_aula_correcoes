#include<stdio.h>

int main(void){
    int i;
    float s,n;

    for(i=1,n=i;i<=50;i++,n+=2)
        s+=n/i;
    printf("\n%f\n",s);

    return 0;
}