#include<stdio.h>

int ehDivisivel(int a,int b);

int main(void){

    int cod, n1,n2;

    printf("\nInforme dois valores:");
    scanf("%d %d",&n1,&n2);
    cod = ehDivisivel(n1,n2);
    if(cod==1)
        printf("%d é divisível por %d\n",n1,n2);
    else
        printf("%d não é divisível por %d\n",n1,n2);

    printf("\n\n\n");
    getchar();
    getchar();
}

int ehDivisivel(int a, int b){
    if(a%b==0)
        return 1;
    else
        return 0;
}







