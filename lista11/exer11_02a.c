#include<stdio.h>

int main(){
    int i;
    float s,n;

    for(i=1,s=0,n=1;i<=10;i++,n=i)
        s+=((i%2==0)?-n:n)/(i*i);

    printf("\n%f\n",s);
}