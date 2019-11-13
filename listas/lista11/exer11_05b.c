#include<stdio.h>

int main(void){
    int i,t,m;
    float n,pi,termo,min=0.0000001;
    for(i=1,n=1,m=1,termo = 4,pi=0;termo>min;i++,n+=2,termo = 4/n){
        pi += m*termo;
        printf("%d/%.0f(%f) ",m*4,n,termo);   
        m*=-1;
    }
        
    printf("= %.15lf\n",pi);
    printf("\ntermo = %.15lf\n",termo);
    return 0;
}