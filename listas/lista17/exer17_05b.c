#include<stdio.h>

int somaDivisores(int num);

int main(void){

    int n;
    printf("\nn: ");
    scanf("%d",&n);
    while(n>0){
        printf("\nsoma: %d\n",somaDivisores(n));
        printf("\nn: ");
        scanf("%d",&n);
    }

    printf("\n\n\n");
    getchar();
    return 0;
}

int somaDivisores(int num){
    int soma = 0;
    for(int i=num-1;i>0;i--)
        if(num%i==0)soma+=i;
    return soma;
}

