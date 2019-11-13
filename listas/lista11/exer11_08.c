#include <stdio.h>

int main(void){
    int temp,a1=1,a2=2,a3=3,n,t,i;

    printf("\nTermo:");
    scanf("%d",&t);
    if(t==1)n=a1;
    if(t==2)n=a2;
    if(t==3)n=a3;
    
    for(i=4;i<=t&&t>3;i++){
        n = a3+2*a2-a1;
        a1 = a2;
        a2 = a3;
        a3 = n;
    }
    printf("\nO %dº Termo e: %d\n",i-1,n);

    return 0;
}