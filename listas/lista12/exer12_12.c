#include<stdio.h>

int main(void){

    float temps[12],m;
    int a,b,i;

    printf("\nInforme as temperaturas:\n");
    for(i=0;i<12;i++)scanf("%f",&temps[i]);

    printf("\nInforme um intervalo de horas inteiras:\n");
    scanf("%d %d",&a,&b);
    
    while(a<=b){
        m=0;
        for(i=a-1;i<=b-1;i++)m+=temps[i];
        printf("\nMedia : %f",m/(b-a+1));

        printf("\nInforme um intervalo de horas inteiras:\n");
        scanf("%d %d",&a,&b);
    }

    return 0;
}