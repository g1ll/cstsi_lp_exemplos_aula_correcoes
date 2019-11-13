#include<stdio.h>
int main(void){
    int x,i;
    
    do{
        printf("\nX[1-10]:");
        scanf("%d",&x);
    }while (x<1 || x>10);

        for(i=1;i<=10;i++)
        printf("\n%d x %d = %d",x,i,(x*i));
    printf("\n");
}
