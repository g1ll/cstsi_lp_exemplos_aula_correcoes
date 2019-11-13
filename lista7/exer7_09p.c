#include <stdio.h>

int main(void){

    int a,b=100,c=1;
    
    do{
        scanf("%d",&a);
        if(a>b && !(a<0||a>100))c*=2;
        b=a;
    }while(a>=0&&a<=100);
    printf("\nc = %d\n",c);
}