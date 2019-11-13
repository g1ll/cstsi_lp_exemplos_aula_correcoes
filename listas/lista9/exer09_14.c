#include<stdio.h>

int main(void){
    int i,n,temp,ant=1,nfi=0;
    printf("\nn termos: ");
    scanf("%d",&n);
    
    if(n>=1) printf("%d ",nfi);
    for(i=2;i<=n;i++){
        temp=nfi;
        nfi += ant;
        ant=temp;
        printf("%d ",nfi);
    }

    printf("\n");
    return 0;
}