#include<stdio.h>
int main(void){

    double s;
    int d,t,n,m;

    printf("\nt:");
    scanf("%d",&t);

    while(t>0){
        for(s=0,d=1,m=1,n=1000;d<=t;d++,n-=3){
            // s+=(d%2==0)?-n/d:n/d;
            // if(d%2==0){
            //     s-=n/d;
            // }else{
            //     s+=n/d;
            // }
            s+= (double) m*n/d;
            m*=-1;
        }
        printf("\ns:%f\n",s);
        printf("\nt:");
        scanf("%d",&t);
    }

}