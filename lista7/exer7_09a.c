#include <stdio.h>

int main(void){

    int a,b=-1,c=0;
    
    do{
        scanf("%d",&a);
        if(a<b && a>0)c++;
        b=a;
    }while(a>=0);
    printf("\nc = %d\n",c);
}