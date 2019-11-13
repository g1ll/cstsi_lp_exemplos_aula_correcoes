#include<stdio.h>
int main(){
    int i,n,c=0,d=0;

    for(i=1;i<=10;i++){
        
        printf("\nn: ");
        scanf("%d",&n);
        if(n>=100&&n<=200)c++;
        else d++;
    }
    
    printf("\n%d Dentro\n%d Fora\n",c,d);
    return 0;
}