#include<stdio.h>

int main(void){
    int i,t;
    float n,pi,termo,min=0.00001;

    i=1;
    n=1;
    pi=0;
    termo = 4;
    do{

        
        pi += (i%2==0)?-termo:termo;
        printf(" %c%d/%.0f(%f) ",(i%2==0)?'-':'+',4,n,termo);   

        i++;
        n+=2;
        termo = 4/n;
    }while(termo>min);
        
    printf("= %.15lf\n",pi);
    printf("\ntermo = %.15lf\n",termo);
    return 0;
}