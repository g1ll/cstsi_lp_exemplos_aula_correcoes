#include<stdio.h>

int main(void){
    int n1,n2;

    do{
        printf("\nn1: ");
        scanf("%d",&n1);

        printf("\nn2: ");
        scanf("%d",&n2);
        if(n2<=n1) 
            printf("\nValores invalidos!");
    }while(n2<=n1);
    printf("\n");
    for(int i =n1;i<=n2;i++)
        printf("%d ",i);
    printf("\n");
    return 0;        
}