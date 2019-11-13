#include<stdio.h>

int main(void){
    int i,t,m;
    double d,pi;
    printf("\nt: ");
    scanf("%d",&t);
    while(t>0){
        for(i=1,d=1,m=1,pi=0;i<=t;i++,d+=2){
            pi+=m*4/d;
            printf(" %d/%.0f ",m*4,d);   
            m*=-1;
        }

        printf("= %.15lf\n",pi);

        printf("\nt: ");
        scanf("%d",&t);
    }
    return 0;
}