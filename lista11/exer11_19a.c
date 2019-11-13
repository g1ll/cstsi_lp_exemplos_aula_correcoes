#include<stdio.h>

int main(void){

    int n,i,soma;

    printf("\nn: ");
    scanf("%d",&n);

    while (n>0){
        //6 = 1+2+3 = 6
        for(i=1,soma=0;i<n;i++){
            if(n%i==0){
                soma+=i;
            }
        }
        if(soma==n)
            printf("\n %d e perfeito ",n);
        else
            printf("\n %d nao e perfeito ",n);

        printf("\nn: ");
        scanf("%d",&n);    
    }

    return 0;
}