#include<stdio.h>
int main(){
    int i;
    float s,n;
    
    for(i=1,s=0,n=1;i<=10;i++,n*=-1)
        s+=n*i/(i*i);

    printf("\n%f\n",s);
}