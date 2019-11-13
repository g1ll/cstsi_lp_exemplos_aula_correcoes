#include<stdio.h>

int main(void){
    int i,t;
    float d,pi;
    printf("\nt: ");
    scanf("%d",&t);
    while(t>0){
        for(i=1,d=1,pi=0;i<=t;i++,d+=2){
            if(i%2==0)
                pi-=4/d;
            else
                pi+=4/d;
            printf(" %c%d/%.0f ",(i%2==0)?'-':'+',4,d);   
        }

        printf("= %.15lf\n",pi);

        printf("\nt: ");
        scanf("%d",&t);
    }
    return 0;
}