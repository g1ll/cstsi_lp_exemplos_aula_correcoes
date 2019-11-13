#include<stdio.h>

int main(void){


    int n;
    printf("\nInforme um número inteiro diferente de zero ou zero para encerrar o programa:\n");
    scanf("%d",&n);
    do{        
        if(n>0)
            printf(" O numero %d eh POSITIVO!\n",n);
        else
            printf(" O numero %d eh NEGATIVO!\n",n);
        scanf("%d",&n);
    }while(n!=0);
}