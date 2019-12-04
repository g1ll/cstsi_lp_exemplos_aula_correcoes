#include<stdio.h>

int maiorNumero(int a,int b);

int main(void){

    int n,n1,n2,maior;
    
    printf("\nn: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\nn1  n2: ");
        scanf("%d %d",&n1,&n2);
        maior = maiorNumero(n1,n2);
        if(maior<0)
            printf("Eles sao iguais!");
        else
            printf("%d",maior);
    }
    
    printf("\n\n\n");
    getchar();
    getchar();
    return 0;
}

int maiorNumero(int a,int b){
    int maior=-1;
    if(a>b)
        maior=a;
    else 
        if(b>a) 
            maior=b;
    return maior;
}