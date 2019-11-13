#include<stdio.h>

int main(void){
    int i,t;
    double s,n;
    printf("\nt: ");
    scanf("%d",&t);
    while(t>0){
        for(i=1,n=1000,s=0;i<=t;i++,n-=3)
            s+=((i%2==0)?-n:n)/i;
                     
        printf("\n%f\n",s);

        printf("\nt: ");
        scanf("%d",&t);
    }
      return 0;
}