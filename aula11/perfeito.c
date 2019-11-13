#include <stdio.h>

int main(void){

    int n,soma=0,i;
    
    printf("\nn:");
    scanf("%d",&n);
    
    while (n>0){
        
        for(i=2,soma=1;i<n;i++){
            if(n%i==0){
                soma+=i;
            }
        }
        if(soma==n)
            printf("\nPerfeito"); 
        else
            printf("\nNao e Perfeito");
         
        printf("\nn:");
        scanf("%d",&n);
    };
    

    return 0;
}