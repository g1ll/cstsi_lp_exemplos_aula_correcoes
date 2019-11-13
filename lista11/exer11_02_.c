#include<stdio.h>

int main(){
    int i;
    float s,n;

    for(i=1,n=i,s=0;i<=10;i++,n=i){
        if(i%2==0){
            s-=n/(i*i);
        }else{
            s+=n/(i*i);
        }
    }
    printf("\n%f\n",s);
}