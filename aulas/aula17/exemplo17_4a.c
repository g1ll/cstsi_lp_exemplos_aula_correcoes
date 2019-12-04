#include<stdio.h>

int ehDivisivel(int a,int b);

int main(void){

    int n1,n2;

    printf("\nInforme dois valores:");
    scanf("%d %d",&n1,&n2);
    
    if(ehDivisivel(n1,n2)==1)
        printf("%d é divisível por %d\n",n1,n2);
    else
        printf("%d não é divisível por %d\n",n1,n2);

    printf("\n\n\n");
    getchar();
    getchar();
}

int ehDivisivel(int a, int b){
    return (a%b==0)?1:0;
}
















