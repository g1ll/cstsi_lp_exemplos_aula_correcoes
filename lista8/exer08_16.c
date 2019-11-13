#include<stdio.h>
int main(){
    int i,n,c,d;
    
    for(c=0,i=1;i<=10;i++){
        
        printf("\nn: ");
        scanf("%d",&n);
        if(n<0)c++;
    }
    
    printf("\n%d Negativos\n",c);
    return 0;
}