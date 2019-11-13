#include <stdio.h>

int main(void){

    int a,b=-1,c=0;

    scanf("%d",&a);
    while(a>=0){
        if(a<b)c++;
        b=a;
        scanf("%d",&a);       
    }
    printf("\nc = %d\n",c);
}