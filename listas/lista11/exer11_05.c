#include<stdio.h>

int main(void){
    int i,t;
    float n,pi,termo,min=0.0000001;
    for(i=1,n=1,termo = 4,pi=0;termo>min;i++,n+=2,termo = 4/n){
        pi += (i%2==0)?-termo:termo;
        printf(" %c%d/%.0f(%f) ",(i%2==0)?'-':'+',4,n,termo);   
    }
        
    printf("= %.15lf\n",pi);
    printf("\ntermo = %.15lf\n",termo);
    return 0;
}